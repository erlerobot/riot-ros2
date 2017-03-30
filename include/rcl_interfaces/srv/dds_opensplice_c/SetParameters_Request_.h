//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParameters_Request_.h
//  Source: rcl_interfaces/srv/dds_opensplice/SetParameters_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SETPARAMETERS_REQUEST__H_
#define _SETPARAMETERS_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Parameter_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct SetParameters_Request_;

         struct SetParameters_Request_
         {
               struct _parameters__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < ::rcl_interfaces::msg::dds_::Parameter_, struct _parameters__seq_uniq_> _parameters__seq;
               typedef DDS_DCPSSequence_var < _parameters__seq> _parameters__seq_var;
               typedef DDS_DCPSSequence_out < _parameters__seq> _parameters__seq_out;
               _parameters__seq parameters_;
         };

         typedef DDS_DCPSStruct_var < SetParameters_Request_> SetParameters_Request__var;
         typedef DDS_DCPSStruct_out < SetParameters_Request_> SetParameters_Request__out;
      }
   }
}




#endif 
