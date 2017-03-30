//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_DescribeParameters_Request_Dcps.cpp
//  Source: rcl_interfaces/srv/dds_opensplice/Sample_DescribeParameters_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Sample_DescribeParameters_Request_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_, struct Sample_DescribeParameters_Request_Seq_uniq_>;
#endif

const char * rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_DescribeParameters_Request_TypeSupportInterface:1.0";

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_duplicate (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_local_id) == 0)
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

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_DescribeParameters_Request_DataWriter:1.0";

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_duplicate (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_local_id) == 0)
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

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_DescribeParameters_Request_DataReader:1.0";

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_duplicate (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_local_id) == 0)
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

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_local_id = "IDL:rcl_interfaces/srv/dds_/Sample_DescribeParameters_Request_DataReaderView:1.0";

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_duplicate (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_local_id) == 0)
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

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_local_id))
   {
      result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr result;
   result = dynamic_cast < rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



