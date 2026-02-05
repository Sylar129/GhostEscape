// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/object.h"
#include "raylib.h"

namespace ghostescape::core {
class ObjectScreen : public Object {
 public:
  Vector2 GetRenderPosition() const { return render_position_; }
  virtual void setRenderPosition(const Vector2& render_position) {
    render_position_ = render_position;
  }

 protected:
  Vector2 render_position_{};
};
}  // namespace ghostescape::core
