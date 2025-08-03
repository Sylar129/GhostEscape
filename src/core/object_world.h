// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/object_screen.h"

namespace ghostescape::core {
class ObjectWorld : public ObjectScreen {
 public:
  Vector2 GetWorldPosition() const { return world_position_; }
  void SetWorldPosition(const Vector2& world_position);

  virtual void setRenderPosition(const Vector2& render_position) override;

 private:
  Vector2 world_position_{};
  using ObjectScreen::render_position_;
};
}  // namespace ghostescape::core
