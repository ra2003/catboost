#pragma once

#include <catboost/libs/logging/logging.h>

#include <util/system/rusage.h>

inline void DumpMemUsage(const TString& msg) {
    CATBOOST_DEBUG_LOG << "Mem usage: " << msg << ": " << TRusage::Get().Rss << Endl;
}
