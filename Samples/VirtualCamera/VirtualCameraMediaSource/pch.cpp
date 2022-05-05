//
// Copyright (C) Microsoft Corporation. All rights reserved.
//

// pch.cpp: source file corresponding to the pre-compiled header
#include "pch.h"

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
PCHAR GetGUIDName(GUID guid)
{
    if (IsEqualGUID(guid, MFMediaType_Default))                 return "MFMediaType_Default";
    else if (IsEqualGUID(guid, MFMediaType_Audio))              return "MFMediaType_Audio";
    else if (IsEqualGUID(guid, MFMediaType_Video))              return "MFMediaType_Video";
    else if (IsEqualGUID(guid, MFMediaType_Protected))          return "MFMediaType_Protected";
    else if (IsEqualGUID(guid, MFMediaType_SAMI))               return "MFMediaType_SAMI";
    else if (IsEqualGUID(guid, MFMediaType_Script))             return "MFMediaType_Script";
    else if (IsEqualGUID(guid, MFMediaType_Image))              return "MFMediaType_Image";
    else if (IsEqualGUID(guid, MFMediaType_HTML))               return "MFMediaType_HTML";
    else if (IsEqualGUID(guid, MFMediaType_Binary))             return "MFMediaType_Binary";
    else if (IsEqualGUID(guid, MFMediaType_FileTransfer))       return "MFMediaType_FileTransfer";
    else if (IsEqualGUID(guid, MFMediaType_Stream))             return "MFMediaType_Stream";
    else if (IsEqualGUID(guid, MFMediaType_MultiplexedFrames))  return "MFMediaType_MultiplexedFrames";
    else if (IsEqualGUID(guid, MFMediaType_Subtitle))           return "MFMediaType_Subtitle";
    else if (IsEqualGUID(guid, MFMediaType_Perception))         return "MFMediaType_Perception";
    else if (IsEqualGUID(MFVideoFormat_Base, guid))             return "MFVideoFormat_Base,   ";
    else if (IsEqualGUID(MFVideoFormat_RGB32, guid))            return "MFVideoFormat_RGB32,  ";
    else if (IsEqualGUID(MFVideoFormat_ARGB32, guid))           return "MFVideoFormat_ARGB32, ";
    else if (IsEqualGUID(MFVideoFormat_RGB24, guid))            return "MFVideoFormat_RGB24,  ";
    else if (IsEqualGUID(MFVideoFormat_RGB555, guid))           return "MFVideoFormat_RGB555, ";
    else if (IsEqualGUID(MFVideoFormat_RGB565, guid))           return "MFVideoFormat_RGB565, ";
    else if (IsEqualGUID(MFVideoFormat_RGB8, guid))             return "MFVideoFormat_RGB8,   ";
    else if (IsEqualGUID(MFVideoFormat_L8, guid))               return "MFVideoFormat_L8,     ";
    else if (IsEqualGUID(MFVideoFormat_L16, guid))              return "MFVideoFormat_L16,    ";
    else if (IsEqualGUID(MFVideoFormat_D16, guid))              return "MFVideoFormat_D16,    ";
    else if (IsEqualGUID(MFVideoFormat_AI44, guid))             return "MFVideoFormat_AI44,   ";
    else if (IsEqualGUID(MFVideoFormat_AYUV, guid))             return "MFVideoFormat_AYUV,   ";
    else if (IsEqualGUID(MFVideoFormat_YUY2, guid))             return "MFVideoFormat_YUY2,   ";
    else if (IsEqualGUID(MFVideoFormat_YVYU, guid))             return "MFVideoFormat_YVYU,   ";
    else if (IsEqualGUID(MFVideoFormat_YVU9, guid))             return "MFVideoFormat_YVU9,   ";
    else if (IsEqualGUID(MFVideoFormat_UYVY, guid))             return "MFVideoFormat_UYVY,   ";
    else if (IsEqualGUID(MFVideoFormat_NV11, guid))             return "MFVideoFormat_NV11,   ";
    else if (IsEqualGUID(MFVideoFormat_NV12, guid))             return "MFVideoFormat_NV12,   ";
    else if (IsEqualGUID(MFVideoFormat_NV21, guid))             return "MFVideoFormat_NV21,   ";
    else if (IsEqualGUID(MFVideoFormat_YV12, guid))             return "MFVideoFormat_YV12,   ";
    else if (IsEqualGUID(MFVideoFormat_I420, guid))             return "MFVideoFormat_I420,   ";
    else if (IsEqualGUID(MFVideoFormat_IYUV, guid))             return "MFVideoFormat_IYUV,   ";
    else if (IsEqualGUID(MFVideoFormat_Y210, guid))             return "MFVideoFormat_Y210,   ";
    else if (IsEqualGUID(MFVideoFormat_Y216, guid))             return "MFVideoFormat_Y216,   ";
    else if (IsEqualGUID(MFVideoFormat_Y410, guid))             return "MFVideoFormat_Y410,   ";
    else if (IsEqualGUID(MFVideoFormat_Y416, guid))             return "MFVideoFormat_Y416,   ";
    else if (IsEqualGUID(MFVideoFormat_Y41P, guid))             return "MFVideoFormat_Y41P,   ";
    else if (IsEqualGUID(MFVideoFormat_Y41T, guid))             return "MFVideoFormat_Y41T,   ";
    else if (IsEqualGUID(MFVideoFormat_Y42T, guid))             return "MFVideoFormat_Y42T,   ";
    else if (IsEqualGUID(MFVideoFormat_P210, guid))             return "MFVideoFormat_P210,   ";
    else if (IsEqualGUID(MFVideoFormat_P216, guid))             return "MFVideoFormat_P216,   ";
    else if (IsEqualGUID(MFVideoFormat_P010, guid))             return "MFVideoFormat_P010,   ";
    else if (IsEqualGUID(MFVideoFormat_P016, guid))             return "MFVideoFormat_P016,   ";
    else if (IsEqualGUID(MFVideoFormat_v210, guid))             return "MFVideoFormat_v210,   ";
    else if (IsEqualGUID(MFVideoFormat_v216, guid))             return "MFVideoFormat_v216,   ";
    else if (IsEqualGUID(MFVideoFormat_v410, guid))             return "MFVideoFormat_v410,   ";
    else if (IsEqualGUID(MFVideoFormat_MP43, guid))             return "MFVideoFormat_MP43,   ";
    else if (IsEqualGUID(MFVideoFormat_MP4S, guid))             return "MFVideoFormat_MP4S,   ";
    else if (IsEqualGUID(MFVideoFormat_M4S2, guid))             return "MFVideoFormat_M4S2,   ";
    else if (IsEqualGUID(MFVideoFormat_MP4V, guid))             return "MFVideoFormat_MP4V,   ";
    else if (IsEqualGUID(MFVideoFormat_WMV1, guid))             return "MFVideoFormat_WMV1,   ";
    else if (IsEqualGUID(MFVideoFormat_WMV2, guid))             return "MFVideoFormat_WMV2,   ";
    else if (IsEqualGUID(MFVideoFormat_WMV3, guid))             return "MFVideoFormat_WMV3,   ";
    else if (IsEqualGUID(MFVideoFormat_WVC1, guid))             return "MFVideoFormat_WVC1,   ";
    else if (IsEqualGUID(MFVideoFormat_MSS1, guid))             return "MFVideoFormat_MSS1,   ";
    else if (IsEqualGUID(MFVideoFormat_MSS2, guid))             return "MFVideoFormat_MSS2,   ";
    else if (IsEqualGUID(MFVideoFormat_MPG1, guid))             return "MFVideoFormat_MPG1,   ";
    else if (IsEqualGUID(MFVideoFormat_DVSL, guid))             return "MFVideoFormat_DVSL,   ";
    else if (IsEqualGUID(MFVideoFormat_DVSD, guid))             return "MFVideoFormat_DVSD,   ";
    else if (IsEqualGUID(MFVideoFormat_DVHD, guid))             return "MFVideoFormat_DVHD,   ";
    else if (IsEqualGUID(MFVideoFormat_DV25, guid))             return "MFVideoFormat_DV25,   ";
    else if (IsEqualGUID(MFVideoFormat_DV50, guid))             return "MFVideoFormat_DV50,   ";
    else if (IsEqualGUID(MFVideoFormat_DVH1, guid))             return "MFVideoFormat_DVH1,   ";
    else if (IsEqualGUID(MFVideoFormat_DVC, guid))              return "MFVideoFormat_DVC,    ";
    else if (IsEqualGUID(MFVideoFormat_H264, guid))             return "MFVideoFormat_H264,   ";
    else if (IsEqualGUID(MFVideoFormat_H265, guid))             return "MFVideoFormat_H265,   ";
    else if (IsEqualGUID(MFVideoFormat_MJPG, guid))             return "MFVideoFormat_MJPG,   ";
    else if (IsEqualGUID(MFVideoFormat_420O, guid))             return "MFVideoFormat_420O,   ";
    else if (IsEqualGUID(MFVideoFormat_HEVC, guid))             return "MFVideoFormat_HEVC,   ";
    else if (IsEqualGUID(MFVideoFormat_HEVC_ES, guid))          return "MFVideoFormat_HEVC_ES,";
    else if (IsEqualGUID(MFVideoFormat_VP80, guid))             return "MFVideoFormat_VP80,   ";
    else if (IsEqualGUID(MFVideoFormat_VP90, guid))             return "MFVideoFormat_VP90,   ";
    else if (IsEqualGUID(MFVideoFormat_ORAW, guid))             return "MFVideoFormat_ORAW,   ";
    else return "Unknown";
}
