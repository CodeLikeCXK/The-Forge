/*
 * Copyright (c) 2017-2025 The Forge Interactive Inc.
 * 
 * This file is part of The-Forge
 * (see https://github.com/ConfettiFX/The-Forge).
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
*/

#ifndef depth_down_sample_srt_h
#define depth_down_sample_srt_h

BEGIN_SRT(DepthDownSampleSrtData)
#include "persistent_set.h"
#include "perframe_set.h"
	BEGIN_SRT_SET(PerBatch)
		DECL_RWBUFFER(PerBatch, RWBuffer(uint), gGlobalAtomic)
		DECL_ARRAY_RWTEXTURES(PerBatch, RWTex2D(float), gDownsampledDepthBuffer, 13)
	END_SRT_SET(PerBatch)
END_SRT(DepthDownSampleSrtData)

#endif /* depth_down_sample_srt_h */

