// Copyright (C) 2024 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import {getThreadInfo, ThreadInfo} from '../../components/sql_utils/thread';
import {Trace} from '../../public/trace';
import {PerfettoPlugin} from '../../public/plugin';
import {asUtid, Utid} from '../../components/sql_utils/core_types';
import {showModal} from '../../widgets/modal';
import {MTK_SCHEDINFO_CMD} from '../../public/exposed_commands';


function showModalErrorThreadStateRequired() {
  showModal({
    title: 'Error: thread state selection required',
    content: 'This command requires a thread state slice to be selected.',
  });
}

// If utid is undefined, returns the utid for the selected thread state track,
// if any. If it's defined, looks up the info about that specific utid.
async function getThreadInfoForUtidOrSelection(
  trace: Trace,
  utid?: Utid,
): Promise<ThreadInfo | undefined> {
  if (utid === undefined) {
    const selection = trace.selection.selection;
    if (selection.kind === 'track_event') {
      if (selection.utid !== undefined) {
        utid = asUtid(selection.utid);
      }
    }
  }
  if (utid === undefined) return undefined;
  return getThreadInfo(trace.engine, utid);
}

export default class implements PerfettoPlugin {
  static readonly id = 'mediatek.perfetto.SchedInfo';
  async onTraceLoad(ctx: Trace): Promise<void> {

    ctx.commands.registerCommand({
      id: MTK_SCHEDINFO_CMD,
      name: 'mediatek sched info',
      callback: async (utid?: Utid) => {
        const thdInfo = await getThreadInfoForUtidOrSelection(ctx, utid);
        if (thdInfo === undefined) {
          return showModalErrorThreadStateRequired();
        }
      },
    });
  }
}
