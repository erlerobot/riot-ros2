//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Int8_Dcps.cpp
//  Source: std_msgs/msg/dds_opensplice/Int8_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Int8_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < std_msgs::msg::dds_::Int8_, struct Int8_Seq_uniq_>;
#endif

const char * std_msgs::msg::dds_::Int8_TypeSupportInterface::_local_id = "IDL:std_msgs/msg/dds_/Int8_TypeSupportInterface:1.0";

std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr std_msgs::msg::dds_::Int8_TypeSupportInterface::_duplicate (std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean std_msgs::msg::dds_::Int8_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, std_msgs::msg::dds_::Int8_TypeSupportInterface::_local_id) == 0)
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

std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr std_msgs::msg::dds_::Int8_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (std_msgs::msg::dds_::Int8_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr std_msgs::msg::dds_::Int8_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr result;
   result = dynamic_cast < std_msgs::msg::dds_::Int8_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * std_msgs::msg::dds_::Int8_DataWriter::_local_id = "IDL:std_msgs/msg/dds_/Int8_DataWriter:1.0";

std_msgs::msg::dds_::Int8_DataWriter_ptr std_msgs::msg::dds_::Int8_DataWriter::_duplicate (std_msgs::msg::dds_::Int8_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean std_msgs::msg::dds_::Int8_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, std_msgs::msg::dds_::Int8_DataWriter::_local_id) == 0)
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

std_msgs::msg::dds_::Int8_DataWriter_ptr std_msgs::msg::dds_::Int8_DataWriter::_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataWriter_ptr result = NULL;
   if (p && p->_is_a (std_msgs::msg::dds_::Int8_DataWriter::_local_id))
   {
      result = dynamic_cast < std_msgs::msg::dds_::Int8_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

std_msgs::msg::dds_::Int8_DataWriter_ptr std_msgs::msg::dds_::Int8_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataWriter_ptr result;
   result = dynamic_cast < std_msgs::msg::dds_::Int8_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * std_msgs::msg::dds_::Int8_DataReader::_local_id = "IDL:std_msgs/msg/dds_/Int8_DataReader:1.0";

std_msgs::msg::dds_::Int8_DataReader_ptr std_msgs::msg::dds_::Int8_DataReader::_duplicate (std_msgs::msg::dds_::Int8_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean std_msgs::msg::dds_::Int8_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, std_msgs::msg::dds_::Int8_DataReader::_local_id) == 0)
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

std_msgs::msg::dds_::Int8_DataReader_ptr std_msgs::msg::dds_::Int8_DataReader::_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataReader_ptr result = NULL;
   if (p && p->_is_a (std_msgs::msg::dds_::Int8_DataReader::_local_id))
   {
      result = dynamic_cast < std_msgs::msg::dds_::Int8_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

std_msgs::msg::dds_::Int8_DataReader_ptr std_msgs::msg::dds_::Int8_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataReader_ptr result;
   result = dynamic_cast < std_msgs::msg::dds_::Int8_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * std_msgs::msg::dds_::Int8_DataReaderView::_local_id = "IDL:std_msgs/msg/dds_/Int8_DataReaderView:1.0";

std_msgs::msg::dds_::Int8_DataReaderView_ptr std_msgs::msg::dds_::Int8_DataReaderView::_duplicate (std_msgs::msg::dds_::Int8_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean std_msgs::msg::dds_::Int8_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, std_msgs::msg::dds_::Int8_DataReaderView::_local_id) == 0)
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

std_msgs::msg::dds_::Int8_DataReaderView_ptr std_msgs::msg::dds_::Int8_DataReaderView::_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (std_msgs::msg::dds_::Int8_DataReaderView::_local_id))
   {
      result = dynamic_cast < std_msgs::msg::dds_::Int8_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

std_msgs::msg::dds_::Int8_DataReaderView_ptr std_msgs::msg::dds_::Int8_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   std_msgs::msg::dds_::Int8_DataReaderView_ptr result;
   result = dynamic_cast < std_msgs::msg::dds_::Int8_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



