/**
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "../include/LogAppenders.h"

const char *OutputStreamAppender::nifi_log_output_stream_error_stderr="nifi.log.outputstream.appender.error.stderr";

const char *RollingAppender::nifi_log_rolling_apender_file = "nifi.log.rolling.appender.file";
const char *RollingAppender::nifi_log_rolling_appender_max_files = "nifi.log.rolling.appender.max.files";
const char *RollingAppender::nifi_log_rolling_appender_max_file_size = "nifi.log.rolling.appender.max.file_size";
