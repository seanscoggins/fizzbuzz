#pragma once

#ifdef TDD_PRACTICE_LIBRARY_EXPORTS
#define TDD_EXPORT __declspec(dllexport)
#else
#define TDD_EXPORT __declspec(dllimport)
#endif
