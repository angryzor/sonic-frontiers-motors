const hh::fnd::RflClassEnumMember timeTypeMembers[2]{
	{ 0, "GLOBAL", "GLOBAL", 0 },
	{ 1, "LOCAL", "LOCAL", 0 },
};
static const hh::fnd::RflClassEnum timeTypeEnum{ "MotorsTimeType", timeTypeMembers, 2 };

struct GOCMotorConstantSpawner {
	app_cmn::game::GOCMotor::TimeType timeType;
	csl::math::Vector3 direction;
	float distance;
	float travelTime;
	float travelWaitTime;
	float returnTime;
	float returnWaitTime;
	float unk5;

	static const hh::fnd::RflClassMember rflClassMembers[8];
	static const hh::fnd::RflClass rflClass;
	static const hh::fnd::RflTypeInfo rflTypeInfo;
};

const hh::fnd::RflClassMember GOCMotorConstantSpawner::rflClassMembers[8]{
	{ "timeType", nullptr, &timeTypeEnum, hh::fnd::RflClassMember::TYPE_ENUM, hh::fnd::RflClassMember::TYPE_UINT32, 0, 0, offsetof(GOCMotorConstantSpawner, timeType), nullptr },
	{ "direction", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_VECTOR3, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, direction), nullptr },
	{ "distance", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, distance), nullptr },
	{ "travelTime", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, travelTime), nullptr },
	{ "travelWaitTime", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, travelWaitTime), nullptr },
	{ "returnTime", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, returnTime), nullptr },
	{ "returnWaitTime", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, returnWaitTime), nullptr },
	{ "unk5", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorConstantSpawner, unk5), nullptr },
};

const hh::fnd::RflClass GOCMotorConstantSpawner::rflClass{ "GOCMotorConstantSpawner", nullptr, sizeof(GOCMotorConstantSpawner), nullptr, 0, GOCMotorConstantSpawner::rflClassMembers, 8, nullptr };
const hh::fnd::RflTypeInfo GOCMotorConstantSpawner::rflTypeInfo{
	"GOCMotorConstantSpawner",
	"GOCMotorConstantSpawner",
	[](void* instance, csl::fnd::IAllocator* allocator) {
		auto* inst = static_cast<GOCMotorConstantSpawner*>(instance);
		inst->timeType = app_cmn::game::GOCMotor::TimeType::GLOBAL;
		inst->direction = csl::math::Vector3{ 1.0f, 0.0f, 0.0f };
		inst->distance = 50.0f;
		inst->travelTime = 1.0f;
		inst->travelWaitTime = 0.5f;
		inst->returnTime = 0.5f;
		inst->returnWaitTime = 0.5f;
		inst->unk5 = 0.0f;
		return instance;
	},
	[](void* instance) {},
	[](void* instance) {},
	sizeof(GOCMotorConstantSpawner),
};

struct GOCMotorRotateSpawner {
	app_cmn::game::GOCMotor::TimeType timeType;
	csl::math::Vector3 axis;
	float speed;
	float unk1;
	float cycle;
	float unk2;

	static const hh::fnd::RflClassMember rflClassMembers[6];
	static const hh::fnd::RflClass rflClass;
	static const hh::fnd::RflTypeInfo rflTypeInfo;
};


const hh::fnd::RflClassMember GOCMotorRotateSpawner::rflClassMembers[6]{
	{ "timeType", nullptr, &timeTypeEnum, hh::fnd::RflClassMember::TYPE_ENUM, hh::fnd::RflClassMember::TYPE_UINT32, 0, 0, offsetof(GOCMotorRotateSpawner, timeType), nullptr },
	{ "axis", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_VECTOR3, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorRotateSpawner, axis), nullptr },
	{ "speed", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorRotateSpawner, speed), nullptr },
	{ "unk1", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorRotateSpawner, unk1), nullptr },
	{ "cycle", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorRotateSpawner, cycle), nullptr },
	{ "unk2", nullptr, nullptr, hh::fnd::RflClassMember::TYPE_FLOAT, hh::fnd::RflClassMember::TYPE_VOID, 0, 0, offsetof(GOCMotorRotateSpawner, unk2), nullptr },
};

const hh::fnd::RflClass GOCMotorRotateSpawner::rflClass{ "GOCMotorRotateSpawner", nullptr, sizeof(GOCMotorRotateSpawner), nullptr, 0, GOCMotorRotateSpawner::rflClassMembers, 6, nullptr };
const hh::fnd::RflTypeInfo GOCMotorRotateSpawner::rflTypeInfo{
	"GOCMotorRotateSpawner",
	"GOCMotorRotateSpawner",
	[](void* instance, csl::fnd::IAllocator* allocator) {
		auto* inst = static_cast<GOCMotorRotateSpawner*>(instance);
		inst->timeType = app_cmn::game::GOCMotor::TimeType::GLOBAL;
		inst->axis = csl::math::Vector3{ 0.0f, 0.0f, 1.0f };
		inst->speed = 0.1f;
		inst->unk1 = 0.0f;
		inst->cycle = 0.0f;
		inst->unk2 = 0.0f;
		return instance;
	},
	[](void* instance) {},
	[](void* instance) {},
	sizeof(GOCMotorRotateSpawner),
};

void GOCMotorConstant_LoadReflection(app_cmn::game::GOCMotorConstant* self, const hh::game::GOComponent::LoadReflectionInfo& info) {
	auto* data = static_cast<GOCMotorConstantSpawner*>(info.data);
	
	app_cmn::game::GOCMotorConstant::SetupInfo setupInfo{};
	setupInfo.timeType = data->timeType;
	setupInfo.frame = nullptr;
	setupInfo.direction = data->direction;
	setupInfo.distance = data->distance;
	setupInfo.travelTime = data->travelTime;
	setupInfo.travelWaitTime = data->travelWaitTime;
	setupInfo.returnTime = data->returnTime;
	setupInfo.returnWaitTime = data->returnWaitTime;
	setupInfo.unk5 = data->unk5;

	self->Setup(setupInfo);
}

void GOCMotorRotate_LoadReflection(app_cmn::game::GOCMotorRotate* self, const hh::game::GOComponent::LoadReflectionInfo& info) {
	auto* data = static_cast<GOCMotorRotateSpawner*>(info.data);

	app_cmn::game::GOCMotorRotate::SetupInfo setupInfo{};
	setupInfo.timeType = data->timeType;
	setupInfo.frame = nullptr;
	setupInfo.axis = data->axis;
	setupInfo.speed = data->speed;
	setupInfo.unk1 = data->unk1;
	setupInfo.cycle = data->cycle;
	setupInfo.unk2 = data->unk2;

	self->Setup(setupInfo);
}

hh::game::GOComponentRegistry::GOComponentRegistryItem gocMotorConstantItem{ "MotorConstant", app_cmn::game::GOCMotorConstant::GetClass(), &GOCMotorConstantSpawner::rflClass };
hh::game::GOComponentRegistry::GOComponentRegistryItem gocMotorRotateItem{ "MotorRotate", app_cmn::game::GOCMotorRotate::GetClass(), &GOCMotorRotateSpawner::rflClass };

hh::game::GOComponentRegistry::GOComponentRegistryItem* regItems[] = { &gocMotorConstantItem, &gocMotorRotateItem, nullptr };

HOOK(uint64_t, __fastcall, GameApplication_Reset, 0x1501A41F0, hh::game::GameApplication* self) {
	auto res = originalGameApplication_Reset(self);
	hh::fnd::BuiltinTypeRegistry::GetTypeInfoRegistry()->Register(&GOCMotorConstantSpawner::rflTypeInfo);
	hh::fnd::BuiltinTypeRegistry::GetTypeInfoRegistry()->Register(&GOCMotorRotateSpawner::rflTypeInfo);
	hh::fnd::BuiltinTypeRegistry::GetClassNameRegistry()->Register(&GOCMotorConstantSpawner::rflClass);
	hh::fnd::BuiltinTypeRegistry::GetClassNameRegistry()->Register(&GOCMotorRotateSpawner::rflClass);
	hh::game::GameObjectSystem::GetInstance()->goComponentRegistry->LoadComponents(regItems);
	return res;
}

BOOL WINAPI DllMain(_In_ HINSTANCE hInstance, _In_ DWORD reason, _In_ LPVOID reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		WRITE_MEMORY(0x141589C00, void*, &GOCMotorConstant_LoadReflection);
		WRITE_MEMORY(0x141589E20, void*, &GOCMotorRotate_LoadReflection);
		INSTALL_HOOK(GameApplication_Reset);
		break;
	case DLL_PROCESS_DETACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}

	return TRUE;
}
