// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include <memory>
#include <vector>

#include "core/object.h"
#include "raylib.h"

namespace ghostescape::core {

class Scene : public Object {
 public:
  virtual ~Scene() = default;

  Vector2 WorldToScreen(const Vector2& world_position) const {
    return GetWorldToScreen2D(world_position, camera_);
  }
  Vector2 ScreenToWorld(const Vector2& screen_position) const {
    return GetScreenToWorld2D(screen_position, camera_);
  }

 protected:
  Camera2D camera_{{}, {}, 0, 1};
  std::vector<std::unique_ptr<Object>> objects_;
};

}  // namespace ghostescape::core
