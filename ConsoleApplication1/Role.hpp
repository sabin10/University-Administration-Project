#pragma once
class Role
{
public:
	enum RoleType {
		STUDENT_ROLE, // 0
		TEACHER_ROLE,
		ADMINISTRATIVE_ROLE,
		GUEST_ROLE
	};

	Role(RoleType pType);
	friend class Person; 
	//ca sa pot accesa in person mType care e protected
protected:
	RoleType mType;
};

