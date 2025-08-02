// Copyright (c) 2025 Sylar129. All rights reserved

namespace ghostescape {

class Object {
 public:
  virtual ~Object() = default;

  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Render() = 0;
  virtual void Clean() = 0;
};

}  // namespace ghostescape
