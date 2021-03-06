//
// Provide for useful general purpose macros.
//

#pragma once

//
// Return a token as a string.  Useful for quoting function and
// variable names.
//

#define TO_STRING(token) #token

//
// Test a string pointer to ensure it isn't empty.
//

#define NOT_EMPTY(p) ((p != nullptr) && *p)
