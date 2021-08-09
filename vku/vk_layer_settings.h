/*
 * Copyright (c) 2015-2021 The Khronos Group Inc.
 * Copyright (c) 2015-2021 Valve Corporation
 * Copyright (c) 2015-2021 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authors:
 * - Christophe Riccio <christophe@lunarg.com>
 */

#pragma once

#include <string>
#include <vector>

#include <vulkan/vk_layer.h>
#include <vulkan/vulkan.h>

namespace vku {

typedef std::vector<std::string> Strings;
typedef std::vector<std::pair<std::string, int>> List;

// Check whether a setting was set either from vk_layer_settings.txt or an environment variable
VK_LAYER_EXPORT bool IsLayerSetting(const char *layer_key, const char *setting_key);

// Query setting data for BOOL setting type in the layer manifest
VK_LAYER_EXPORT bool GetLayerSettingBool(const char *layer_key, const char *setting_key);

// Query setting data for INT setting type in the layer manifest
VK_LAYER_EXPORT int GetLayerSettingInt(const char *layer_key, const char *setting_key);

// Query setting data for FLOAT setting type in the layer manifest
VK_LAYER_EXPORT double GetLayerSettingFloat(const char *layer_key, const char *setting_key);

// Query setting data for STRING, ENUM, LOAD_FILE, SAVE_FILE and SAVE_FOLDER setting types in the layer manifest
VK_LAYER_EXPORT std::string GetLayerSettingString(const char *layer_key, const char *setting_key);

// Query setting data for FLAGS setting type in the layer manifest
VK_LAYER_EXPORT Strings GetLayerSettingStrings(const char *layer_key, const char *setting_key);

// Query setting data for LIST setting type in the layer manifest
VK_LAYER_EXPORT List GetLayerSettingList(const char *layer_key, const char *setting_key);
}  // namespace vku
