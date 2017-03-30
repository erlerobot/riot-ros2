//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ListParameters_Response_.h
//  Source: rcl_interfaces/srv/dds_opensplice/ListParameters_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _LISTPARAMETERS_RESPONSE__H_
#define _LISTPARAMETERS_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "ListParametersResult_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct ListParameters_Response_;

         struct ListParameters_Response_
         {
               ::rcl_interfaces::msg::dds_::ListParametersResult_ result_;
         };

         typedef DDS_DCPSStruct_var < ListParameters_Response_> ListParameters_Response__var;
         typedef DDS_DCPSStruct_out < ListParameters_Response_> ListParameters_Response__out;
      }
   }
}




#endif 
