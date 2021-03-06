/*
 * Copyright 2015 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

////////////////////////////////////////////////////////////////
//
// operational-config-reader.h
//
// This file deals with reading operational config
//
///////////////////////////////////////////////////////////////
#ifndef OPERATIONAL_CONFIG_READER_H_
#define OPERATIONAL_CONFIG_READER_H_

namespace heron {
namespace config {

class OperationalConfigReader : public YamlFileReader {
 public:
  OperationalConfigReader(EventLoop* eventLoop, const sp_string& _defaults_file);
  virtual ~OperationalConfigReader();

  // Gets release override for this topology name
  // If none exists, returns empty string
  sp_string GetTopologyReleaseOverride(const sp_string& _top_name);

  virtual void OnConfigFileLoad();
};
}  // namespace config
}  // namespace heron

#endif
