#include <gtest/gtest.h>
#include <Remotery.h>

TEST(remotery, basics) {
  Remotery *rmt;
  ASSERT_TRUE(RMT_ERROR_NONE == rmt_CreateGlobalInstance(&rmt));
  rmt_LogText("start profiling");
  rmt_LogText("end profiling");
  rmt_DestroyGlobalInstance(rmt);
  printf("Cleaned up and quit\n");
  ASSERT_TRUE(true);
}
