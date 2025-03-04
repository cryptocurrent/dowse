#include <hiredis/hiredis.h>

#define REDIS_HOST "127.0.0.1"
#define REDIS_PORT 6379

redisContext *redis = NULL;
redisReply   *reply = NULL;

/* typedef struct redisReply { */
/*     int type;            // REDIS_REPLY */
/*     long long integer;  // The integer when type is REDIS_REPLY_INTEGER */
/*     int len;           // Length of string */
/*     char *str;        // Used for both REDIS_REPLY_ERROR and REDIS_REPLY_STRING */
/*     size_t elements; // number of elements, for REDIS_REPLY_ARRAY */
/*     struct redisReply **element; // elements vector for REDIS_REPLY_ARRAY */
/* } redisReply; */

void connect_redis(char *host, int port, int db);
