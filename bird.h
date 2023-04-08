#ifndef SNNS_BIRD_TEST_HEADER_H
#define SNNS_BIRD_TEST_HEADER_H




#ifdef BIRD_SCOPE
#error BIRD_SCOPE multiple definitions
#endif

#ifdef BIRD_TEST
#error BIRD_TEST multiple definitions
#endif

#ifdef BIRD_MESSAGE
#error BIRD_MESSAGE multiple definitions
#endif

#ifdef BIRD_ASSERT
#error BIRD_ASSERT multiple definitions
#endif

#ifdef BIRD_CONCAT_
#error BIRD_CONCAT_ multiple definitions
#endif

#ifdef BIRD_CONCAT 
#error BIRD_CONCAT multiple definitions
#endif

#ifdef BIRD_CONCAT_LINE
#error BIRD_CONCAT_LINE multiple definitions
#endif

#define BIRD_CONCAT_(prefix, suffix) prefix##suffix
#define BIRD_CONCAT(prefix, suffix) BIRD_CONCAT_(prefix, suffix)
#define BIRD_CONCAT_LINE(prefix) BIRD_CONCAT(prefix##_, __LINE__)

#define BIRD_SCOPE(text) struct BIRD_CONCAT_LINE(BirdScope) {\
const char * scope_name = text; \



#define BIRD_TEST
#define BIRD_MESSAGE
#define BIRD_ASSERT

#endif