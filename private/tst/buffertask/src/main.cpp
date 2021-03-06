/*
 * Copyright (C) 2018 Intel Corporation.All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
*/
/*
 * main.cpp
 *
 *  Created 2016
 */

#include "gtest/gtest.h"
#include "avbaudiomodules/internal/audio/common/IasAudioLogging.hpp"

using namespace IasAudio;

int main(int argc, char* argv[])
{

  IasAudio::IasAudioLogging::registerDltApp(true);

  IasAudioLogging::addDltContextItem("SMJ", DLT_LOG_VERBOSE, DLT_TRACE_STATUS_ON);
  IasAudioLogging::addDltContextItem("MDL", DLT_LOG_VERBOSE, DLT_TRACE_STATUS_ON);
  IasAudioLogging::addDltContextItem("BFT", DLT_LOG_VERBOSE, DLT_TRACE_STATUS_ON);

  ::testing::InitGoogleTest(&argc, argv);
  int result = RUN_ALL_TESTS();
  return result;
}
