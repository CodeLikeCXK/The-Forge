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

#ifndef vb2_structs_h
#define vb2_structs_h

#if defined(__cplusplus)
#define FLAT(x) x
#endif

#define MAX_BLUR_KERNEL_SIZE 8

STRUCT(VsInVBAlphaTested)
{
    DATA(float3, position, POSITION);
    DATA(uint, texCoord, TEXCOORD);
};

STRUCT(PsInVBAlphaTested)
{
	DATA(float4, position, SV_Position);
	DATA(float2, texCoord, TEXCOORD0);
	DATA(FLAT(uint), vbData, TEXCOORD1);
	DATA(FLAT(uint), batchData, TEXCOORD2);
};

// for Godray blur comp
STRUCT(BlurRootConstantData)
{
	DATA(uint, mBlurPassType, None);
	DATA(uint, mFilterRadius, None);
};

// godray comp
STRUCT(BlurWeightData)
{
	DATA(float4, mBlurWeights[MAX_BLUR_KERNEL_SIZE / 4], None);
};

STRUCT(RenderTargetInfo)
{
    DATA(uint, view, None);
    DATA(int, width, None);
    DATA(int, height, None);
};

STRUCT(RootConstantSCurveData)
{
	DATA(float, C1, None);
	DATA(float, C2, None);
	DATA(float, C3, None);
	DATA(float, UseSCurve, None);
    
	DATA(float, ScurveSlope, None);
	DATA(float, ScurveScale, None);
	DATA(float, linearScale, None);
	DATA(float, pad0, None);
	DATA(uint, outputMode, None);
};



STRUCT(UniformCameraSkyData)
{
	DATA(float4x4, projView, None);
	DATA(float3, camPos, None);
};



#endif /* vb2_structs_h */
