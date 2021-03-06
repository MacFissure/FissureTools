#include <CoreFoundation/CoreFoundation.h>
#include <ruby/ruby.h>

#ifndef fissure_dictionary_type_h
#define fissure_dictionary_type_h

VALUE cftype2rb(CFTypeRef obj);
VALUE cfstr2rb(CFStringRef acfstr);
VALUE cfdic2rb(CFDictionaryRef acfdic);
VALUE cfarr2rb(CFArrayRef acfarr);
VALUE cfnum2rb(CFNumberRef acfnum);
VALUE cfbool2rb(CFBooleanRef obj);

#endif
