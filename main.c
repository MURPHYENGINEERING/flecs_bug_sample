#include "common.h"
#include "module.h"


ecs_entity_t eBase;
ecs_entity_t eDescendant;

int main(int argc, char* argv[])
{
  ecs_world_t* world = ecs_init();

  ECS_IMPORT(world, Module);

  ecs_entity_t e = ecs_new_id(world);
  ecs_add(world, e, SharedTag);

  ecs_fini(world);

  return 0;
}