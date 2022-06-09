#include "common.h"

#ifdef FIXED

#undef ECS_ENTITY_DEFINE
#define ECS_ENTITY_DEFINE(world, id, ...) \
  {                                       \
    ecs_entity_desc_t desc = {0};         \
    desc.entity = id;                     \
    desc.name = #id;                      \
    desc.symbol = #id;                    \     // <------ add this
    desc.add_expr = #__VA_ARGS__;         \
    id = ecs_entity_init(world, &desc);   \
    ecs_id(id) = id;                      \
  }                                       \
  (void)id;                               \
  (void)ecs_id(id);

#endif


ECS_DECLARE(SharedTag);

void CommonImport(ecs_world_t *world)
{
  ECS_MODULE(world, Common);

  ECS_TAG_DEFINE(world, SharedTag);
}