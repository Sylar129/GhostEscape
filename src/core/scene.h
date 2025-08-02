// Copyright (c) 2025 Sylar129. All rights reserved

#include <vector>

#include "core/object.h"
#include "raylib.h"

namespace ghostescape {

class Scene : public Object {
 public:
  virtual ~Scene() = default;

 private:
  Vector2 camera_position_;
  std::vector<Object*> objects_;
};

}  // namespace ghostescape
