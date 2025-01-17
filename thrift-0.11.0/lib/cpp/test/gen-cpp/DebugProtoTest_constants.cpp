/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "DebugProtoTest_constants.h"

namespace thrift { namespace test { namespace debug {

const DebugProtoTestConstants g_DebugProtoTest_constants;

DebugProtoTestConstants::DebugProtoTestConstants() {
  COMPACT_TEST.a_byte = 127;
  COMPACT_TEST.__isset.a_byte = true;
  COMPACT_TEST.a_i16 = 32000;
  COMPACT_TEST.__isset.a_i16 = true;
  COMPACT_TEST.a_i32 = 1000000000;
  COMPACT_TEST.__isset.a_i32 = true;
  COMPACT_TEST.a_i64 = 1099511627775LL;
  COMPACT_TEST.__isset.a_i64 = true;
  COMPACT_TEST.a_double = 5.6789;
  COMPACT_TEST.__isset.a_double = true;
  COMPACT_TEST.a_string = "my string";
  COMPACT_TEST.__isset.a_string = true;
  COMPACT_TEST.true_field = true;
  COMPACT_TEST.__isset.true_field = true;
  COMPACT_TEST.false_field = false;
  COMPACT_TEST.__isset.false_field = true;
  Empty tmp635;

  COMPACT_TEST.empty_struct_field = tmp635;
  COMPACT_TEST.__isset.empty_struct_field = true;
  std::vector<int8_t>  tmp636;
  tmp636.push_back(-127);
  tmp636.push_back(-1);
  tmp636.push_back(0);
  tmp636.push_back(1);
  tmp636.push_back(127);

  COMPACT_TEST.byte_list = tmp636;
  COMPACT_TEST.__isset.byte_list = true;
  std::vector<int16_t>  tmp637;
  tmp637.push_back(-1);
  tmp637.push_back(0);
  tmp637.push_back(1);
  tmp637.push_back(32767);

  COMPACT_TEST.i16_list = tmp637;
  COMPACT_TEST.__isset.i16_list = true;
  std::vector<int32_t>  tmp638;
  tmp638.push_back(-1);
  tmp638.push_back(0);
  tmp638.push_back(255);
  tmp638.push_back(65535);
  tmp638.push_back(16777215);
  tmp638.push_back(2147483647);

  COMPACT_TEST.i32_list = tmp638;
  COMPACT_TEST.__isset.i32_list = true;
  std::vector<int64_t>  tmp639;
  tmp639.push_back(-1LL);
  tmp639.push_back(0LL);
  tmp639.push_back(255LL);
  tmp639.push_back(65535LL);
  tmp639.push_back(16777215LL);
  tmp639.push_back(4294967295LL);
  tmp639.push_back(1099511627775LL);
  tmp639.push_back(281474976710655LL);
  tmp639.push_back(72057594037927935LL);
  tmp639.push_back(9223372036854775807LL);

  COMPACT_TEST.i64_list = tmp639;
  COMPACT_TEST.__isset.i64_list = true;
  std::set<Empty>  tmp640;
  Empty tmp641;

  tmp640.insert(tmp641);

  COMPACT_TEST.struct_set = tmp640;
  COMPACT_TEST.__isset.struct_set = true;
  std::map<int8_t, int8_t>  tmp642;
  tmp642.insert(std::make_pair(1, 2));

  COMPACT_TEST.byte_byte_map = tmp642;
  COMPACT_TEST.__isset.byte_byte_map = true;
  std::map<int16_t, int8_t>  tmp643;
  tmp643.insert(std::make_pair(1, 1));
  tmp643.insert(std::make_pair(-1, 1));
  tmp643.insert(std::make_pair(32767, 1));

  COMPACT_TEST.i16_byte_map = tmp643;
  COMPACT_TEST.__isset.i16_byte_map = true;
  std::map<int32_t, int8_t>  tmp644;
  tmp644.insert(std::make_pair(1, 1));
  tmp644.insert(std::make_pair(-1, 1));
  tmp644.insert(std::make_pair(2147483647, 1));

  COMPACT_TEST.i32_byte_map = tmp644;
  COMPACT_TEST.__isset.i32_byte_map = true;
  std::map<int64_t, int8_t>  tmp645;
  tmp645.insert(std::make_pair(0LL, 1));
  tmp645.insert(std::make_pair(1LL, 1));
  tmp645.insert(std::make_pair(-1LL, 1));
  tmp645.insert(std::make_pair(9223372036854775807LL, 1));

  COMPACT_TEST.i64_byte_map = tmp645;
  COMPACT_TEST.__isset.i64_byte_map = true;
  std::map<double, int8_t>  tmp646;
  tmp646.insert(std::make_pair(-1.1, 1));
  tmp646.insert(std::make_pair(1.1, 1));

  COMPACT_TEST.double_byte_map = tmp646;
  COMPACT_TEST.__isset.double_byte_map = true;
  std::map<std::string, int8_t>  tmp647;
  tmp647.insert(std::make_pair("first", 1));
  tmp647.insert(std::make_pair("second", 2));
  tmp647.insert(std::make_pair("third", 3));
  tmp647.insert(std::make_pair("", 0));

  COMPACT_TEST.string_byte_map = tmp647;
  COMPACT_TEST.__isset.string_byte_map = true;
  std::map<bool, int8_t>  tmp648;
  tmp648.insert(std::make_pair(true, 1));
  tmp648.insert(std::make_pair(false, 0));

  COMPACT_TEST.boolean_byte_map = tmp648;
  COMPACT_TEST.__isset.boolean_byte_map = true;
  std::map<int8_t, int16_t>  tmp649;
  tmp649.insert(std::make_pair(1, 1));
  tmp649.insert(std::make_pair(2, -1));
  tmp649.insert(std::make_pair(3, 32767));

  COMPACT_TEST.byte_i16_map = tmp649;
  COMPACT_TEST.__isset.byte_i16_map = true;
  std::map<int8_t, int32_t>  tmp650;
  tmp650.insert(std::make_pair(1, 1));
  tmp650.insert(std::make_pair(2, -1));
  tmp650.insert(std::make_pair(3, 2147483647));

  COMPACT_TEST.byte_i32_map = tmp650;
  COMPACT_TEST.__isset.byte_i32_map = true;
  std::map<int8_t, int64_t>  tmp651;
  tmp651.insert(std::make_pair(1, 1LL));
  tmp651.insert(std::make_pair(2, -1LL));
  tmp651.insert(std::make_pair(3, 9223372036854775807LL));

  COMPACT_TEST.byte_i64_map = tmp651;
  COMPACT_TEST.__isset.byte_i64_map = true;
  std::vector<double>  tmp652;
  tmp652.push_back(0.1);
  tmp652.push_back(0.2);
  tmp652.push_back(0.3);

  COMPACT_TEST.double_list = tmp652;
  COMPACT_TEST.__isset.double_list = true;
  std::vector<std::string>  tmp653;
  tmp653.push_back("first");
  tmp653.push_back("second");
  tmp653.push_back("third");

  COMPACT_TEST.string_list = tmp653;
  COMPACT_TEST.__isset.string_list = true;
  std::vector<bool>  tmp654;
  tmp654.push_back(true);
  tmp654.push_back(true);
  tmp654.push_back(true);
  tmp654.push_back(false);
  tmp654.push_back(false);
  tmp654.push_back(false);

  COMPACT_TEST.boolean_list = tmp654;
  COMPACT_TEST.__isset.boolean_list = true;
  std::vector<Empty>  tmp655;
  Empty tmp656;

  tmp655.push_back(tmp656);
  Empty tmp657;

  tmp655.push_back(tmp657);

  COMPACT_TEST.struct_list = tmp655;
  COMPACT_TEST.__isset.struct_list = true;
  std::set<int8_t>  tmp658;
  tmp658.insert(-127);
  tmp658.insert(-1);
  tmp658.insert(0);
  tmp658.insert(1);
  tmp658.insert(127);

  COMPACT_TEST.byte_set = tmp658;
  COMPACT_TEST.__isset.byte_set = true;
  std::set<int16_t>  tmp659;
  tmp659.insert(-1);
  tmp659.insert(0);
  tmp659.insert(1);
  tmp659.insert(32767);

  COMPACT_TEST.i16_set = tmp659;
  COMPACT_TEST.__isset.i16_set = true;
  std::set<int32_t>  tmp660;
  tmp660.insert(1);
  tmp660.insert(2);
  tmp660.insert(3);

  COMPACT_TEST.i32_set = tmp660;
  COMPACT_TEST.__isset.i32_set = true;
  std::set<int64_t>  tmp661;
  tmp661.insert(-1LL);
  tmp661.insert(0LL);
  tmp661.insert(255LL);
  tmp661.insert(65535LL);
  tmp661.insert(16777215LL);
  tmp661.insert(4294967295LL);
  tmp661.insert(1099511627775LL);
  tmp661.insert(281474976710655LL);
  tmp661.insert(72057594037927935LL);
  tmp661.insert(9223372036854775807LL);

  COMPACT_TEST.i64_set = tmp661;
  COMPACT_TEST.__isset.i64_set = true;
  std::set<double>  tmp662;
  tmp662.insert(0.1);
  tmp662.insert(0.2);
  tmp662.insert(0.3);

  COMPACT_TEST.double_set = tmp662;
  COMPACT_TEST.__isset.double_set = true;
  std::set<std::string>  tmp663;
  tmp663.insert("first");
  tmp663.insert("second");
  tmp663.insert("third");

  COMPACT_TEST.string_set = tmp663;
  COMPACT_TEST.__isset.string_set = true;
  std::set<bool>  tmp664;
  tmp664.insert(true);
  tmp664.insert(false);

  COMPACT_TEST.boolean_set = tmp664;
  COMPACT_TEST.__isset.boolean_set = true;
  std::map<int8_t, double>  tmp665;
  tmp665.insert(std::make_pair(1, 0.1));
  tmp665.insert(std::make_pair(2, -0.1));
  tmp665.insert(std::make_pair(3, 1e+06));

  COMPACT_TEST.byte_double_map = tmp665;
  COMPACT_TEST.__isset.byte_double_map = true;
  std::map<int8_t, std::string>  tmp666;
  tmp666.insert(std::make_pair(1, ""));
  tmp666.insert(std::make_pair(2, "blah"));
  tmp666.insert(std::make_pair(3, "loooooooooooooong string"));

  COMPACT_TEST.byte_string_map = tmp666;
  COMPACT_TEST.__isset.byte_string_map = true;
  std::map<int8_t, bool>  tmp667;
  tmp667.insert(std::make_pair(1, true));
  tmp667.insert(std::make_pair(2, false));

  COMPACT_TEST.byte_boolean_map = tmp667;
  COMPACT_TEST.__isset.byte_boolean_map = true;
  std::map<std::vector<int8_t> , int8_t>  tmp668;
  std::vector<int8_t>  tmp669;
  tmp669.push_back(1);
  tmp669.push_back(2);
  tmp669.push_back(3);

  tmp668.insert(std::make_pair(tmp669, 1));
  std::vector<int8_t>  tmp670;
  tmp670.push_back(0);
  tmp670.push_back(1);

  tmp668.insert(std::make_pair(tmp670, 2));
  std::vector<int8_t>  tmp671;

  tmp668.insert(std::make_pair(tmp671, 0));

  COMPACT_TEST.list_byte_map = tmp668;
  COMPACT_TEST.__isset.list_byte_map = true;
  std::map<std::set<int8_t> , int8_t>  tmp672;
  std::set<int8_t>  tmp673;
  tmp673.insert(1);
  tmp673.insert(2);
  tmp673.insert(3);

  tmp672.insert(std::make_pair(tmp673, 1));
  std::set<int8_t>  tmp674;
  tmp674.insert(0);
  tmp674.insert(1);

  tmp672.insert(std::make_pair(tmp674, 2));
  std::set<int8_t>  tmp675;

  tmp672.insert(std::make_pair(tmp675, 0));

  COMPACT_TEST.set_byte_map = tmp672;
  COMPACT_TEST.__isset.set_byte_map = true;
  std::map<std::map<int8_t, int8_t> , int8_t>  tmp676;
  std::map<int8_t, int8_t>  tmp677;
  tmp677.insert(std::make_pair(1, 1));

  tmp676.insert(std::make_pair(tmp677, 1));
  std::map<int8_t, int8_t>  tmp678;
  tmp678.insert(std::make_pair(2, 2));

  tmp676.insert(std::make_pair(tmp678, 2));
  std::map<int8_t, int8_t>  tmp679;

  tmp676.insert(std::make_pair(tmp679, 0));

  COMPACT_TEST.map_byte_map = tmp676;
  COMPACT_TEST.__isset.map_byte_map = true;
  std::map<int8_t, std::map<int8_t, int8_t> >  tmp680;
  std::map<int8_t, int8_t>  tmp681;

  tmp680.insert(std::make_pair(0, tmp681));
  std::map<int8_t, int8_t>  tmp682;
  tmp682.insert(std::make_pair(1, 1));

  tmp680.insert(std::make_pair(1, tmp682));
  std::map<int8_t, int8_t>  tmp683;
  tmp683.insert(std::make_pair(1, 1));
  tmp683.insert(std::make_pair(2, 2));

  tmp680.insert(std::make_pair(2, tmp683));

  COMPACT_TEST.byte_map_map = tmp680;
  COMPACT_TEST.__isset.byte_map_map = true;
  std::map<int8_t, std::set<int8_t> >  tmp684;
  std::set<int8_t>  tmp685;

  tmp684.insert(std::make_pair(0, tmp685));
  std::set<int8_t>  tmp686;
  tmp686.insert(1);

  tmp684.insert(std::make_pair(1, tmp686));
  std::set<int8_t>  tmp687;
  tmp687.insert(1);
  tmp687.insert(2);

  tmp684.insert(std::make_pair(2, tmp687));

  COMPACT_TEST.byte_set_map = tmp684;
  COMPACT_TEST.__isset.byte_set_map = true;
  std::map<int8_t, std::vector<int8_t> >  tmp688;
  std::vector<int8_t>  tmp689;

  tmp688.insert(std::make_pair(0, tmp689));
  std::vector<int8_t>  tmp690;
  tmp690.push_back(1);

  tmp688.insert(std::make_pair(1, tmp690));
  std::vector<int8_t>  tmp691;
  tmp691.push_back(1);
  tmp691.push_back(2);

  tmp688.insert(std::make_pair(2, tmp691));

  COMPACT_TEST.byte_list_map = tmp688;
  COMPACT_TEST.__isset.byte_list_map = true;

  MYCONST = 2;

  MY_SOME_ENUM = (SomeEnum::type)1;

  MY_SOME_ENUM_1 = (SomeEnum::type)1;

  MY_ENUM_MAP.insert(std::make_pair((SomeEnum::type)1, (SomeEnum::type)2));

  StructWithSomeEnum tmp692;
  tmp692.blah = (SomeEnum::type)2;
  tmp692.__isset.blah = true;

  EXTRA_CRAZY_MAP.insert(std::make_pair((SomeEnum::type)1, tmp692));

}

}}} // namespace

