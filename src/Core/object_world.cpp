// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/object_world.h"

#include "core/game.h"
#include "core/scene.h"

namespace ghostescape::core {

void ObjectWorld::SetWorldPosition(const Vector2& world_position) {
  world_position_ = world_position;
  render_position_ =
      Game::Get().GetCurrentScene()->WorldToScreen(world_position);
}

void ObjectWorld::setRenderPosition(const Vector2& render_position) {
  render_position_ = render_position;
  world_position_ =
      Game::Get().GetCurrentScene()->ScreenToWorld(render_position);
}

}  // namespace ghostescape::core
