#include "MultiArrayLayout_SplDcps.h"
#include "ccpp_MultiArrayLayout_.h"
#include "dds_type_aliases.h"

const char *
__std_msgs_msg_dds__MultiArrayLayout___name(void)
{
    return (const char*)"std_msgs::msg::dds_::MultiArrayLayout_";
}

const char *
__std_msgs_msg_dds__MultiArrayLayout___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__std_msgs_msg_dds__MultiArrayLayout___copyIn(
    c_base base,
    struct ::std_msgs::msg::dds_::MultiArrayLayout_ *from,
    struct _std_msgs_msg_dds__MultiArrayLayout_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
/* Code generated by /private/tmp/opensplice-20170321-33051-1xv1o2s/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        struct _std_msgs_msg_dds__MultiArrayDimension_ *dest0;
        ::std_msgs::msg::dds_::MultiArrayLayout_::_dim__seq *src = &from->dim_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "std_msgs::msg::dds_::MultiArrayDimension_"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<std_msgs::msg::dds_::MultiArrayDimension_>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (struct _std_msgs_msg_dds__MultiArrayDimension_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /private/tmp/opensplice-20170321-33051-1xv1o2s/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
                extern c_bool __std_msgs_msg_dds__MultiArrayDimension___copyIn(c_base base,
                    std_msgs::msg::dds_::MultiArrayDimension_ *From,
                    struct _std_msgs_msg_dds__MultiArrayDimension_ *To);

                result = __std_msgs_msg_dds__MultiArrayDimension___copyIn(base, &(*src)[i0], (struct _std_msgs_msg_dds__MultiArrayDimension_ *)&dest0[i0]);
            }
        }
        to->dim_ = (c_sequence)dest0;
#else
        dest0 = (struct _std_msgs_msg_dds__MultiArrayDimension_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /private/tmp/opensplice-20170321-33051-1xv1o2s/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
                extern c_bool __std_msgs_msg_dds__MultiArrayDimension___copyIn(c_base base,
                    std_msgs::msg::dds_::MultiArrayDimension_ *From,
                    struct _std_msgs_msg_dds__MultiArrayDimension_ *To);

                result = __std_msgs_msg_dds__MultiArrayDimension___copyIn(base, &(*src)[i0], (struct _std_msgs_msg_dds__MultiArrayDimension_ *)&dest0[i0]);
            }
        }
        to->dim_ = (c_sequence)dest0;
#endif
    }
    to->data_offset_ = (c_ulong)from->data_offset_;
    return result;
}

void
__std_msgs_msg_dds__MultiArrayLayout___copyOut(
    void *_from,
    void *_to)
{
    struct _std_msgs_msg_dds__MultiArrayLayout_ *from = (struct _std_msgs_msg_dds__MultiArrayLayout_ *)_from;
    struct ::std_msgs::msg::dds_::MultiArrayLayout_ *to = (struct ::std_msgs::msg::dds_::MultiArrayLayout_ *)_to;
    {
        long size0;
        struct _std_msgs_msg_dds__MultiArrayDimension_ *src0 = (struct _std_msgs_msg_dds__MultiArrayDimension_ *)from->dim_;
        ::std_msgs::msg::dds_::MultiArrayLayout_::_dim__seq *dst = &to->dim_;

        size0 = c_arraySize(c_sequence(from->dim_));
        to->dim_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                extern void __std_msgs_msg_dds__MultiArrayDimension___copyOut(void *from, void *to);
                __std_msgs_msg_dds__MultiArrayDimension___copyOut((void *)&src0[i0], (void *)&(*dst)[i0]);
            }
        }
    }
    to->data_offset_ = (::DDS::ULong)from->data_offset_;
}

