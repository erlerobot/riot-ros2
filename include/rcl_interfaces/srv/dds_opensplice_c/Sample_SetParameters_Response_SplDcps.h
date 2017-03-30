#ifndef SAMPLE_SETPARAMETERS_RESPONSE_SPLTYPES_H
#define SAMPLE_SETPARAMETERS_RESPONSE_SPLTYPES_H

#include "ccpp_Sample_SetParameters_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "SetParameters_Response_SplDcps.h"

extern c_metaObject __Sample_SetParameters_Response__rcl_interfaces__load (c_base base);

extern c_metaObject __Sample_SetParameters_Response__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __Sample_SetParameters_Response__rcl_interfaces_srv_dds___load (c_base base);

extern c_metaObject __rcl_interfaces_srv_dds__Sample_SetParameters_Response___load (c_base base);
extern const char * __rcl_interfaces_srv_dds__Sample_SetParameters_Response___keys (void);
extern const char * __rcl_interfaces_srv_dds__Sample_SetParameters_Response___name (void);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ ;
extern  c_bool __rcl_interfaces_srv_dds__Sample_SetParameters_Response___copyIn(c_base base, struct rcl_interfaces::srv::dds_::Sample_SetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_SetParameters_Response___copyOut(void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__SetParameters_Response_ response_;
};

#endif
