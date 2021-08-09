#include "fgl/Grammar.h"
#include "fgl/Language.h"

fgl::Grammar::Grammar(fgl::Language* language)
			:	::deamer::language::generator::definition::property::user::Grammar<
					fgl::Language>(language)
{
}

void fgl::Grammar::GenerateObjects()
{
	// Non-Terminal initialization
	program.Set(::deamer::language::type::definition::object::main::NonTerminal("program", { program_deamerreserved_star__stmt__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__stmt__", { deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__.Pointer(),deamerreserved_star__stmt___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("stmt", { stmt_entry_manipulation_rule.Pointer(),stmt_exit_manipulation_rule.Pointer(),stmt_setting_rule.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
setting_rule.Set(::deamer::language::type::definition::object::main::NonTerminal("setting_rule", { setting_rule_TARGET_SETTING.Pointer(),setting_rule_MEMBER_SETTING.Pointer(),setting_rule_INCLUDE_SETTING.Pointer(),setting_rule_FUNCTION_SETTING.Pointer(),setting_rule_USER_INSERTED_SETTING.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
entry_manipulation_rule.Set(::deamer::language::type::definition::object::main::NonTerminal("entry_manipulation_rule", { entry_manipulation_rule_capture_object_ARROW_ADD_manipulation.Pointer(),entry_manipulation_rule_capture_object_ARROW_manipulation.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
exit_manipulation_rule.Set(::deamer::language::type::definition::object::main::NonTerminal("exit_manipulation_rule", { exit_manipulation_rule_capture_object_ARROW_MINUS_manipulation.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
capture.Set(::deamer::language::type::definition::object::main::NonTerminal("capture", { capture_LEFT_SQUARE_BRACKET_deamerreserved_arrow__deamerreserved_optional__flavor_capture_____RIGHT_SQUARE_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__deamerreserved_optional__flavor_capture____.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__deamerreserved_optional__flavor_capture____", { deamerreserved_arrow__deamerreserved_optional__flavor_capture_____flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer(),deamerreserved_arrow__deamerreserved_optional__flavor_capture_____EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__", { deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___COMMA_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer(),deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___AND_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer(),deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
manipulation.Set(::deamer::language::type::definition::object::main::NonTerminal("manipulation", { manipulation_LEFT_BRACKET_deamerreserved_arrow__deamerreserved_optional__instruction_____RIGHT_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__deamerreserved_optional__instruction____.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__deamerreserved_optional__instruction____", { deamerreserved_arrow__deamerreserved_optional__instruction_____instruction_deamerreserved_star__COMMA__instruction__.Pointer(),deamerreserved_arrow__deamerreserved_optional__instruction_____EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__COMMA__instruction__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__COMMA__instruction__", { deamerreserved_star__COMMA__instruction___COMMA_instruction_deamerreserved_star__COMMA__instruction__.Pointer(),deamerreserved_star__COMMA__instruction___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
instruction.Set(::deamer::language::type::definition::object::main::NonTerminal("instruction", { instruction_new_flavor.Pointer(),instruction_delete_flavor.Pointer(),instruction_expand_flavor.Pointer(),instruction_user_defined_instruction.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
new_flavor.Set(::deamer::language::type::definition::object::main::NonTerminal("new_flavor", { new_flavor_NEW_DOT_flavor.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
delete_flavor.Set(::deamer::language::type::definition::object::main::NonTerminal("delete_flavor", { delete_flavor_DELETE_DOT_flavor.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
expand_flavor.Set(::deamer::language::type::definition::object::main::NonTerminal("expand_flavor", { expand_flavor_EXPAND_DOT_flavor_DOT_WITH_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
flavor_capture.Set(::deamer::language::type::definition::object::main::NonTerminal("flavor_capture", { flavor_capture_flavor.Pointer(),flavor_capture_conditional_flavor.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
conditional_flavor.Set(::deamer::language::type::definition::object::main::NonTerminal("conditional_flavor", { conditional_flavor_value_EQEQ_value.Pointer(),conditional_flavor_value_LTE_value.Pointer(),conditional_flavor_value_GTE_value.Pointer(),conditional_flavor_value_LT_value.Pointer(),conditional_flavor_value_GT_value.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
value.Set(::deamer::language::type::definition::object::main::NonTerminal("value", { value_object_access.Pointer(),value_NUMBER.Pointer(),value_STRING.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
user_defined_instruction.Set(::deamer::language::type::definition::object::main::NonTerminal("user_defined_instruction", { user_defined_instruction_value.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
object.Set(::deamer::language::type::definition::object::main::NonTerminal("object", { object_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
object_access.Set(::deamer::language::type::definition::object::main::NonTerminal("object_access", { object_access_deamerreserved_arrow__member__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__member__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__member__", { deamerreserved_arrow__member___member_deamerreserved_star__DOT__member__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__DOT__member__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__DOT__member__", { deamerreserved_star__DOT__member___DOT_member_deamerreserved_star__DOT__member__.Pointer(),deamerreserved_star__DOT__member___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
member.Set(::deamer::language::type::definition::object::main::NonTerminal("member", { member_VARNAME_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__argument_____RIGHT_PARANTHESIS.Pointer(),member_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__deamerreserved_optional__argument____.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__deamerreserved_optional__argument____", { deamerreserved_arrow__deamerreserved_optional__argument_____argument_deamerreserved_star__COMMA__argument__.Pointer(),deamerreserved_arrow__deamerreserved_optional__argument_____EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__COMMA__argument__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__COMMA__argument__", { deamerreserved_star__COMMA__argument___COMMA_argument_deamerreserved_star__COMMA__argument__.Pointer(),deamerreserved_star__COMMA__argument___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
argument.Set(::deamer::language::type::definition::object::main::NonTerminal("argument", { argument_value.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
flavor.Set(::deamer::language::type::definition::object::main::NonTerminal("flavor", { flavor_VARNAME_flavor_specialization.Pointer(),flavor_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
flavor_specialization.Set(::deamer::language::type::definition::object::main::NonTerminal("flavor_specialization", { flavor_specialization_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));


	// Production-Rule initialization
	deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->stmt.Pointer(),Language->deamerreserved_star__stmt__.Pointer() }));
deamerreserved_star__stmt___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
program_deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->deamerreserved_star__stmt__.Pointer() }));
stmt_entry_manipulation_rule.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->entry_manipulation_rule.Pointer() }));
stmt_exit_manipulation_rule.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->exit_manipulation_rule.Pointer() }));
stmt_setting_rule.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->setting_rule.Pointer() }));
setting_rule_TARGET_SETTING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->TARGET_SETTING.Pointer() }));
setting_rule_MEMBER_SETTING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->MEMBER_SETTING.Pointer() }));
setting_rule_INCLUDE_SETTING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->INCLUDE_SETTING.Pointer() }));
setting_rule_FUNCTION_SETTING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION_SETTING.Pointer() }));
setting_rule_USER_INSERTED_SETTING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->USER_INSERTED_SETTING.Pointer() }));
entry_manipulation_rule_capture_object_ARROW_ADD_manipulation.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->capture.Pointer(),Language->object.Pointer(),Language->ARROW.Pointer(),Language->ADD.Pointer(),Language->manipulation.Pointer() }));
entry_manipulation_rule_capture_object_ARROW_manipulation.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->capture.Pointer(),Language->object.Pointer(),Language->ARROW.Pointer(),Language->manipulation.Pointer() }));
exit_manipulation_rule_capture_object_ARROW_MINUS_manipulation.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->capture.Pointer(),Language->object.Pointer(),Language->ARROW.Pointer(),Language->MINUS.Pointer(),Language->manipulation.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__flavor_capture_____flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->flavor_capture.Pointer(),Language->deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__flavor_capture_____EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___COMMA_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->flavor_capture.Pointer(),Language->deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer() }));
deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___AND_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->AND.Pointer(),Language->flavor_capture.Pointer(),Language->deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.Pointer() }));
deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
capture_LEFT_SQUARE_BRACKET_deamerreserved_arrow__deamerreserved_optional__flavor_capture_____RIGHT_SQUARE_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__flavor_capture____.Pointer(),Language->RIGHT_SQUARE_BRACKET.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__instruction_____instruction_deamerreserved_star__COMMA__instruction__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->instruction.Pointer(),Language->deamerreserved_star__COMMA__instruction__.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__instruction_____EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
deamerreserved_star__COMMA__instruction___COMMA_instruction_deamerreserved_star__COMMA__instruction__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->instruction.Pointer(),Language->deamerreserved_star__COMMA__instruction__.Pointer() }));
deamerreserved_star__COMMA__instruction___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
manipulation_LEFT_BRACKET_deamerreserved_arrow__deamerreserved_optional__instruction_____RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__instruction____.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
instruction_new_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->new_flavor.Pointer() }));
instruction_delete_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->delete_flavor.Pointer() }));
instruction_expand_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expand_flavor.Pointer() }));
instruction_user_defined_instruction.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->user_defined_instruction.Pointer() }));
new_flavor_NEW_DOT_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->NEW.Pointer(),Language->DOT.Pointer(),Language->flavor.Pointer() }));
delete_flavor_DELETE_DOT_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->DELETE.Pointer(),Language->DOT.Pointer(),Language->flavor.Pointer() }));
expand_flavor_EXPAND_DOT_flavor_DOT_WITH_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->EXPAND.Pointer(),Language->DOT.Pointer(),Language->flavor.Pointer(),Language->DOT.Pointer(),Language->WITH.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->value.Pointer(),Language->RIGHT_PARANTHESIS.Pointer() }));
flavor_capture_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->flavor.Pointer() }));
flavor_capture_conditional_flavor.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->conditional_flavor.Pointer() }));
conditional_flavor_value_EQEQ_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer(),Language->EQEQ.Pointer(),Language->value.Pointer() }));
conditional_flavor_value_LTE_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer(),Language->LTE.Pointer(),Language->value.Pointer() }));
conditional_flavor_value_GTE_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer(),Language->GTE.Pointer(),Language->value.Pointer() }));
conditional_flavor_value_LT_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer(),Language->LT.Pointer(),Language->value.Pointer() }));
conditional_flavor_value_GT_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer(),Language->GT.Pointer(),Language->value.Pointer() }));
value_object_access.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->object_access.Pointer() }));
value_NUMBER.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->NUMBER.Pointer() }));
value_STRING.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->STRING.Pointer() }));
user_defined_instruction_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer() }));
object_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
deamerreserved_arrow__member___member_deamerreserved_star__DOT__member__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->member.Pointer(),Language->deamerreserved_star__DOT__member__.Pointer() }));
deamerreserved_star__DOT__member___DOT_member_deamerreserved_star__DOT__member__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->DOT.Pointer(),Language->member.Pointer(),Language->deamerreserved_star__DOT__member__.Pointer() }));
deamerreserved_star__DOT__member___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
object_access_deamerreserved_arrow__member__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->deamerreserved_arrow__member__.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__argument_____argument_deamerreserved_star__COMMA__argument__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->argument.Pointer(),Language->deamerreserved_star__COMMA__argument__.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__argument_____EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
deamerreserved_star__COMMA__argument___COMMA_argument_deamerreserved_star__COMMA__argument__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->argument.Pointer(),Language->deamerreserved_star__COMMA__argument__.Pointer() }));
deamerreserved_star__COMMA__argument___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
member_VARNAME_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__argument_____RIGHT_PARANTHESIS.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__argument____.Pointer(),Language->RIGHT_PARANTHESIS.Pointer() }));
member_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
argument_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer() }));
flavor_VARNAME_flavor_specialization.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer(),Language->flavor_specialization.Pointer() }));
flavor_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
flavor_specialization_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_PARANTHESIS.Pointer(),Language->value.Pointer(),Language->RIGHT_PARANTHESIS.Pointer() }));


	// Unknown references
	

	// Add object calls
	// AddObject(...)
	AddObject(program);
AddObject(deamerreserved_star__stmt__);
AddObject(stmt);
AddObject(setting_rule);
AddObject(entry_manipulation_rule);
AddObject(exit_manipulation_rule);
AddObject(capture);
AddObject(deamerreserved_arrow__deamerreserved_optional__flavor_capture____);
AddObject(deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__);
AddObject(manipulation);
AddObject(deamerreserved_arrow__deamerreserved_optional__instruction____);
AddObject(deamerreserved_star__COMMA__instruction__);
AddObject(instruction);
AddObject(new_flavor);
AddObject(delete_flavor);
AddObject(expand_flavor);
AddObject(flavor_capture);
AddObject(conditional_flavor);
AddObject(value);
AddObject(user_defined_instruction);
AddObject(object);
AddObject(object_access);
AddObject(deamerreserved_arrow__member__);
AddObject(deamerreserved_star__DOT__member__);
AddObject(member);
AddObject(deamerreserved_arrow__deamerreserved_optional__argument____);
AddObject(deamerreserved_star__COMMA__argument__);
AddObject(argument);
AddObject(flavor);
AddObject(flavor_specialization);


	AddObject(deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__);
AddObject(deamerreserved_star__stmt___EMPTY);
AddObject(program_deamerreserved_star__stmt__);
AddObject(stmt_entry_manipulation_rule);
AddObject(stmt_exit_manipulation_rule);
AddObject(stmt_setting_rule);
AddObject(setting_rule_TARGET_SETTING);
AddObject(setting_rule_MEMBER_SETTING);
AddObject(setting_rule_INCLUDE_SETTING);
AddObject(setting_rule_FUNCTION_SETTING);
AddObject(setting_rule_USER_INSERTED_SETTING);
AddObject(entry_manipulation_rule_capture_object_ARROW_ADD_manipulation);
AddObject(entry_manipulation_rule_capture_object_ARROW_manipulation);
AddObject(exit_manipulation_rule_capture_object_ARROW_MINUS_manipulation);
AddObject(deamerreserved_arrow__deamerreserved_optional__flavor_capture_____flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__);
AddObject(deamerreserved_arrow__deamerreserved_optional__flavor_capture_____EMPTY);
AddObject(deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___COMMA_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__);
AddObject(deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___AND_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__);
AddObject(deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___EMPTY);
AddObject(capture_LEFT_SQUARE_BRACKET_deamerreserved_arrow__deamerreserved_optional__flavor_capture_____RIGHT_SQUARE_BRACKET);
AddObject(deamerreserved_arrow__deamerreserved_optional__instruction_____instruction_deamerreserved_star__COMMA__instruction__);
AddObject(deamerreserved_arrow__deamerreserved_optional__instruction_____EMPTY);
AddObject(deamerreserved_star__COMMA__instruction___COMMA_instruction_deamerreserved_star__COMMA__instruction__);
AddObject(deamerreserved_star__COMMA__instruction___EMPTY);
AddObject(manipulation_LEFT_BRACKET_deamerreserved_arrow__deamerreserved_optional__instruction_____RIGHT_BRACKET);
AddObject(instruction_new_flavor);
AddObject(instruction_delete_flavor);
AddObject(instruction_expand_flavor);
AddObject(instruction_user_defined_instruction);
AddObject(new_flavor_NEW_DOT_flavor);
AddObject(delete_flavor_DELETE_DOT_flavor);
AddObject(expand_flavor_EXPAND_DOT_flavor_DOT_WITH_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS);
AddObject(flavor_capture_flavor);
AddObject(flavor_capture_conditional_flavor);
AddObject(conditional_flavor_value_EQEQ_value);
AddObject(conditional_flavor_value_LTE_value);
AddObject(conditional_flavor_value_GTE_value);
AddObject(conditional_flavor_value_LT_value);
AddObject(conditional_flavor_value_GT_value);
AddObject(value_object_access);
AddObject(value_NUMBER);
AddObject(value_STRING);
AddObject(user_defined_instruction_value);
AddObject(object_VARNAME);
AddObject(deamerreserved_arrow__member___member_deamerreserved_star__DOT__member__);
AddObject(deamerreserved_star__DOT__member___DOT_member_deamerreserved_star__DOT__member__);
AddObject(deamerreserved_star__DOT__member___EMPTY);
AddObject(object_access_deamerreserved_arrow__member__);
AddObject(deamerreserved_arrow__deamerreserved_optional__argument_____argument_deamerreserved_star__COMMA__argument__);
AddObject(deamerreserved_arrow__deamerreserved_optional__argument_____EMPTY);
AddObject(deamerreserved_star__COMMA__argument___COMMA_argument_deamerreserved_star__COMMA__argument__);
AddObject(deamerreserved_star__COMMA__argument___EMPTY);
AddObject(member_VARNAME_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__argument_____RIGHT_PARANTHESIS);
AddObject(member_VARNAME);
AddObject(argument_value);
AddObject(flavor_VARNAME_flavor_specialization);
AddObject(flavor_VARNAME);
AddObject(flavor_specialization_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS);


	


	// Place higher level operations here.
	// ReplaceObject(..., ...)
	// DeleteObject(..., ...)
	
}
