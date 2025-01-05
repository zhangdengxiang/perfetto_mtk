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

import {SqlTableDescription} from '../../components/widgets/sql/table/table_description';
import {
  DurationColumn,
  ProcessColumnSet,
  StandardColumn,
  ThreadColumn,
  ThreadColumnSet,
  ThreadStateIdColumn,
  TimestampColumn,
} from '../../components/widgets/sql/table/well_known_columns';

export function getThreadStateTable(): SqlTableDescription {
  return {
    name: 'thread_state',
    columns: [
      new ThreadStateIdColumn('threadStateSqlId', {notNull: true}),
      new TimestampColumn('ts'),
      new DurationColumn('dur'),
      new StandardColumn('state'),
      new StandardColumn('cpu', {aggregationType: 'nominal'}),
      new ThreadColumnSet('utid', {title: 'utid', notNull: true}),
      new ProcessColumnSet(
        {
          column: 'upid',
          source: {
            table: 'thread',
            joinOn: {
              utid: 'utid',
            },
            innerJoin: true,
          },
        },
        {title: 'upid (process)', notNull: true},
      ),
      new StandardColumn('ioWait', {aggregationType: 'nominal'}),
      new StandardColumn('blockedFunction'),
      new ThreadColumn('wakerUtid', {title: 'Waker thread'}),
      new ThreadStateIdColumn('wakerId'),
      new StandardColumn('irqContext', {aggregationType: 'nominal'}),
      new StandardColumn('ucpu', {
        aggregationType: 'nominal',
        startsHidden: true,
      }),
    ],
  };
}
