//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetParameterTypes_Response_Dcps.cpp
//  Source: rcl_interfaces/srv/dds_opensplice/Sample_GetParameterTypes_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Sample_GetParameterTypes_Response_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_, struct Sample_GetParameterTypes_Response_Seq_uniq_>;
#endif

const char * rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_GetParameterTypes_Response_TypeSupportInterface:1.0";

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_duplicate (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_GetParameterTypes_Response_DataWriter:1.0";

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_duplicate (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_GetParameterTypes_Response_DataReader:1.0";

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_duplicate (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_GetParameterTypes_Response_DataReaderView:1.0";

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_duplicate (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



