/*
	You do not need this file
	
	birdtest is for testing bird, not for using bird to test your own code
	
	To use the bird testing file, simply include bird.h in the file you
	want to write your tests in.
*/

#include "bird.h"







BIRD_SCOPE("Scope tier 1")
{
	BIRD_SCOPE("Scope tier 2")
	{
		BIRD_TEST("Test tier 1")
		{
			BIRD_SCOPE("Scope tier 3 inside test 1")
			{
				BIRD_TEST("Test tier 2")
				{
					BIRD_MESSAGE("text");
					BIRD_ASSERT(false);
				};
			};
		};
	};
};