//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MultiArrayDimension_.h
//  Source: std_msgs/msg/dds_opensplice/MultiArrayDimension_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _MULTIARRAYDIMENSION__H_
#define _MULTIARRAYDIMENSION__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct MultiArrayDimension_;

         struct MultiArrayDimension_
         {
               DDS::String_mgr label_;
               DDS::ULong size_;
               DDS::ULong stride_;
         };

         typedef DDS_DCPSStruct_var < MultiArrayDimension_> MultiArrayDimension__var;
         typedef DDS_DCPSStruct_out < MultiArrayDimension_> MultiArrayDimension__out;
      }
   }
}




#endif 
