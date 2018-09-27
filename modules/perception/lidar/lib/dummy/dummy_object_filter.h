/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_PERCEPTION_LIDAR_LIB_DUMMY_DUMMY_OBJECT_FILTER_H_
#define MODULES_PERCEPTION_LIDAR_LIB_DUMMY_DUMMY_OBJECT_FILTER_H_

#include <string>
#include <vector>

#include "modules/perception/lidar/lib/interface/base_object_filter.h"

namespace apollo {
namespace perception {
namespace lidar {

class DummyObjectFilter : public BaseObjectFilter {
 public:
  DummyObjectFilter() = default;

  virtual ~DummyObjectFilter() = default;

  bool Init(const ObjectFilterInitOptions& options =
                ObjectFilterInitOptions()) override;

  // @brief: filter objects
  // @param [in]: options
  // @param [in/out]: frame
  // segmented_objects should be valid, and will be filtered,
  bool Filter(const ObjectFilterOptions& options, LidarFrame* frame) override;

  std::string Name() const override { return "DummyObjectFilter"; }
};  // class DummyObjectFilter

}  // namespace lidar
}  // namespace perception
}  // namespace apollo

#endif  // MODULES_PERCEPTION_LIDAR_LIB_INTERFACE_BASE_OBJECT_FILTER_H_
