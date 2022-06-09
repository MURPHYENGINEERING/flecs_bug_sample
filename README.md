The module `Common` defines a tag `SharedTag`.
Declaration and definition are split between `common.h` and `common.c`.

The module `Module` consumed `SharedTag` with a system.

`main` consumes `SharedTag` by adding it to an entity.

The bug can be seen in `common.c`: using `ECS_TAG_DEFINE` causes `unresolved identifier 'SharedTag'`