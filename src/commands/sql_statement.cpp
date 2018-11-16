#include <sql_statement.h>

cmd::SqlStatement::SqlStatement(cmd::StatementType type): type_(type) {}

cmd::SqlStatement::SqlStatement() : type_(NONE){}

std::string cmd::SqlStatement::get_message() {
    return message_;
}

void cmd::SqlStatement::set_message(std::string message) {
    message_ = message;
}