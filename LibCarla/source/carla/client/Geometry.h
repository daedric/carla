// Copyright (c) 2020 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "carla/Memory.h"
#include "carla/NonCopyable.h"

namespace carla {
namespace road {
namespace element {
    class Geometry;
    struct Waypoint;
} // namespace element
} // namespace road

namespace client {

  class Map;
  class Waypoint;

  class Geometry : public EnableSharedFromThis<Geometry>, private NonCopyable {
  public:
  private:
    friend class Waypoint;
    Geometry(SharedPtr<const Map> parent, const road::element::Waypoint& waypoint);

  private:
    SharedPtr<const Map> _parent;
    const road::element::Geometry& _geometry;
  };
}
} // namespace carla