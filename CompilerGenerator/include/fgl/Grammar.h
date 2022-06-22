/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef FGL_GRAMMAR_H
#define FGL_GRAMMAR_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/Grammar.h"
#include "Deamer/Language/Type/Definition/Object/Special/Uninitialized.h"

namespace fgl
{
	class Language;

	/*!	\class Grammar
	 *
	 *	\brief This contains the grammar LPD of the language fgl
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Grammar : public ::deamer::language::generator::definition::property::user::Grammar<
								::fgl::Language>
	{
	public:
		// Non-Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> program;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> setting_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> entry_manipulation_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> exit_manipulation_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> capture;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> manipulation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__deamerreserved_optional__instruction____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__COMMA__instruction__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> instruction;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> new_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> delete_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> expand_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> flavor_capture;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> conditional_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> user_defined_instruction;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> object;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> object_access;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__member__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__DOT__member__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> member;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__deamerreserved_optional__argument____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__COMMA__argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> flavor_specialization;

	
		// Production-Rule declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__stmt___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> program_deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_entry_manipulation_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_exit_manipulation_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_setting_rule;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> setting_rule_TARGET_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> setting_rule_MEMBER_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> setting_rule_INCLUDE_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> setting_rule_FUNCTION_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> setting_rule_USER_INSERTED_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> entry_manipulation_rule_capture_object_ARROW_ADD_manipulation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> entry_manipulation_rule_capture_object_ARROW_manipulation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> exit_manipulation_rule_capture_object_ARROW_MINUS_manipulation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__flavor_capture_____flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__flavor_capture_____EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___COMMA_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___AND_flavor_capture_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> capture_LEFT_SQUARE_BRACKET_deamerreserved_arrow__deamerreserved_optional__flavor_capture_____RIGHT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__instruction_____instruction_deamerreserved_star__COMMA__instruction__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__instruction_____EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__instruction___COMMA_instruction_deamerreserved_star__COMMA__instruction__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__instruction___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> manipulation_LEFT_BRACKET_deamerreserved_arrow__deamerreserved_optional__instruction_____RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> instruction_new_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> instruction_delete_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> instruction_expand_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> instruction_user_defined_instruction;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> new_flavor_NEW_DOT_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> delete_flavor_DELETE_DOT_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expand_flavor_EXPAND_DOT_flavor_DOT_WITH_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> flavor_capture_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> flavor_capture_conditional_flavor;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_flavor_value_EQEQ_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_flavor_value_LTE_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_flavor_value_GTE_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_flavor_value_LT_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_flavor_value_GT_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> value_object_access;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> value_NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> value_STRING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> user_defined_instruction_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> object_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__member___member_deamerreserved_star__DOT__member__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__DOT__member___DOT_member_deamerreserved_star__DOT__member__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__DOT__member___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> object_access_deamerreserved_arrow__member__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__argument_____argument_deamerreserved_star__COMMA__argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__argument_____EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__argument___COMMA_argument_deamerreserved_star__COMMA__argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__argument___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> member_VARNAME_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__argument_____RIGHT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> member_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> argument_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> flavor_VARNAME_flavor_specialization;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> flavor_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> flavor_specialization_LEFT_PARANTHESIS_value_RIGHT_PARANTHESIS;

	
	private:
		// Unknown reference declarations
		
	
	public:
		Grammar(fgl::Language* language);

		void GenerateObjects() override;
	};
}

#endif // FGL_GRAMMAR_H
