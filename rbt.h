#include <stdbool.h>
#include <stdlib.h>

typedef struct rbt rbt_t;

typedef int (*rbt_compare_t)(const char *, const char *);

typedef void (*rbt_destroy_t)(void *);

rbt_t *rbt_init(rbt_compare_t *cmp, rbt_destroy_t *destroy);

bool rbt_insert(rbt_t *rbt, const char *key, void *data);

void *rbt_delete(rbt_t *rbt, const char *key);

void *rbt_get(rbt_t *rbt, const char *key);

bool rbt_has_key(rbt_t *rbt, const char *key);

size_t rbt_size(rbt_t *rbt);

void rbt_destroy(rbt_t *rbt);
