#include "module.h"
#include "common.h"

#include <stdio.h>

ECS_SYSTEM_DECLARE(system);

void system(ecs_iter_t *it)
{
}

void ModuleImport(ecs_world_t *world)
{
  ECS_MODULE(world, Module);

  ECS_IMPORT(world, Common);

  ECS_SYSTEM_DEFINE(world, system, 0, SharedTag);
}