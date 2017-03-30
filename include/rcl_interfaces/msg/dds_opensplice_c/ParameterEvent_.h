//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ParameterEvent_.h
//  Source: rcl_interfaces/msg/dds_opensplice/ParameterEvent_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _PARAMETEREVENT__H_
#define _PARAMETEREVENT__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Parameter_.h"


namespace rcl_interfaces
{
   namespace msg
   {
      namespace dds_
      {
         struct ParameterEvent_;

         struct ParameterEvent_
         {
               struct _new_parameters__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < Parameter_, struct _new_parameters__seq_uniq_> _new_parameters__seq;
               typedef DDS_DCPSSequence_var < _new_parameters__seq> _new_parameters__seq_var;
               typedef DDS_DCPSSequence_out < _new_parameters__seq> _new_parameters__seq_out;
               struct _changed_parameters__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < Parameter_, struct _changed_parameters__seq_uniq_> _changed_parameters__seq;
               typedef DDS_DCPSSequence_var < _changed_parameters__seq> _changed_parameters__seq_var;
               typedef DDS_DCPSSequence_out < _changed_parameters__seq> _changed_parameters__seq_out;
               struct _deleted_parameters__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < Parameter_, struct _deleted_parameters__seq_uniq_> _deleted_parameters__seq;
               typedef DDS_DCPSSequence_var < _deleted_parameters__seq> _deleted_parameters__seq_var;
               typedef DDS_DCPSSequence_out < _deleted_parameters__seq> _deleted_parameters__seq_out;
               _new_parameters__seq new_parameters_;
               _changed_parameters__seq changed_parameters_;
               _deleted_parameters__seq deleted_parameters_;
         };

         typedef DDS_DCPSStruct_var < ParameterEvent_> ParameterEvent__var;
         typedef DDS_DCPSStruct_out < ParameterEvent_> ParameterEvent__out;
      }
   }
}




#endif 
