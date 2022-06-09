#include "common.h"

ECS_DECLARE(SharedTag);

void CommonImport(ecs_world_t *world)
{
  ECS_MODULE(world, Common);
  
  #ifndef FIXED
   ECS_TAG_DEFINE(world, SharedTag);
  /*
    error: systema: unresolved identifier 'SharedTag'
    SharedTag((0))
  */
  #else
    {
      ecs_entity_desc_t desc = {0};
      desc.entity = SharedTag;
      desc.name = "SharedTag";
      
      // SOLUTION: Have to add this to ECS_ENTITY_DEFINE
      // desc.symbol = #id; \
      desc.symbol = "SharedTag";

      desc.add_expr = "0";
      SharedTag = ecs_entity_init(world, &desc);
      ecs_id(SharedTag) = SharedTag;
    }
    (void)SharedTag;
    (void)ecs_id(SharedTag);
  #endif
}
