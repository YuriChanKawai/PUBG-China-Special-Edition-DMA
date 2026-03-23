export module Offsets;
import std;
import <cstdint>;



export struct Offsets
{
	static constexpr  std::string process_name = "wgprojectm.exe";

	struct Base
	{
		static constexpr int64_t CanvasMap = 0x159E0130;

		static constexpr int64_t GObjects = 0x0;
		static constexpr int64_t GNames = 0x1547DE90;
		static constexpr int64_t GWorld = 0x14A1EBF8;


	};

	struct CanvasMap
	{
		static constexpr int64_t DebugCanvasObject = 0x20;
	};

	struct UObject
	{
		static constexpr int64_t FName = 0x18;
	};

	struct DebugCanvasObject
	{
		static constexpr int64_t Matrix = 0x270;
	};


	struct UWorld
	{
		static constexpr int64_t PersistentLevel = 0xB0; // ULevel*   
		static constexpr int64_t NetDriver = 0xB8; // UGameInstance*   
		static constexpr int64_t OwningGameInstance = 0xD8; // UGameInstance*   
	};


	struct UGameInstance
	{
		static constexpr int64_t LocalPlayers = 0x38; // TArray<ULocalPlayer*>   
	};

	struct UNetDriver
	{
		static constexpr int64_t ServerConnection = 0x88; // UNetConnection*
	};


	struct UPlayer
	{
		static constexpr int64_t PlayerController = 0x30 ; // APlayerController*   
	};

	struct APlayerController
	{
		static constexpr int64_t AcknowledgedPawn = 0x3448; // APawn* 
		static constexpr int64_t PlayerCameraManager = 0x0660;//    APlayerCameraManager* 
		static constexpr int64_t ControlRotation = 0x0288; // FRotator
	};

	struct APlayerCameraManager
	{
		static constexpr int64_t CameraCache = 0x0640; // 
	};

	struct ULevel
	{
		static constexpr int64_t Actors = 0xB0; // TArray<AActor*>   
	};

	struct AActor
	{
		static constexpr int64_t RootComponent = 0x268; // USceneComponent*  
		static constexpr int64_t ReplicatedMovement = 0x0170; // FRepMovement
	};


	struct ACharacter
	{
		static constexpr int64_t Mesh = 0x0658; //USkeletalMeshComponent*
	};


	struct USkinnedMeshComponent
	{
		static constexpr int64_t SkeletalMesh = 0x7F0; //USkeletalMesh*
		static constexpr int64_t boneArr1 = 0x810; //TArray<FTransform>
		static constexpr int64_t boneArr2 = 0x820; //TArray<FTransform>
		static constexpr int64_t boneNow = 0x854; //uint32_t
		static constexpr int64_t CachedLocalBounds = 0x096C; //FBoxSphereBounds
		static constexpr int64_t ComponentToWorld = 0x01F0; //FTransform

	};

	struct USkeletalMesh
	{
		static constexpr int64_t ExtendedBounds = 0x008C; //FBoxSphereBounds
		static constexpr int64_t MeshBoneInfo = 0x238; //TArray<FMeshBoneInfo>
	};


	struct USceneComponent
	{
		static constexpr int64_t ComponentToWorld = 0x1F0; //FTransform
	};



	struct AUAECharacter
	{
		static constexpr int64_t PlayerName = 0xAF8; // FString
		static constexpr int64_t PlayerState = 0x5F0; // APlayerState*
		static constexpr int64_t TeamID = 0x0B78; // int32_t
		static constexpr int64_t bIsAI = 0x0B94; // bool
		static constexpr int64_t Health = 0xFE8; // float
		static constexpr int64_t SignalHP = 0x0FFC; // float
		static constexpr int64_t SignalHPMax = 0x1010; // float
		static constexpr int64_t HealthStatus = 0x384C; // unsigned char
		static constexpr int64_t PawnStateRepSyncData = 0x1670; // TArray<unsigned char>
		static constexpr int64_t PawnState = 0x1700; // int
		static constexpr int64_t PawnStatesExtend = 0x19C8; // FString
		static constexpr int64_t CurrentUsingWeaponSafety = 0x10F8; // ASTExtraWeapon*
		static constexpr int64_t EnergyMax = 0x39F0; // float (FCharacterEnergyData.EnergyMax)
		static constexpr int64_t Energy = 0x39F4; // float (FCharacterEnergyData.EnergyCurrent)
	};

	struct ASTExtraPlayerState {
		static constexpr int64_t Kills = 0x0824;
		static constexpr int64_t CurEnegyBuff = 0x1B94;
		static constexpr int64_t SignalHP = 0x1D30;
	};

	struct ASTExtraWeapon {
		static constexpr int64_t WeaponEntityComp = 0x1D08; // UWeaponEntity*
		static constexpr int64_t CurBulletNumInClip = 0x1D18; // int
		static constexpr int64_t CurMaxBulletNumInOneClip = 0x1D1C; // int
	};

	struct UWeaponEntity {

		static constexpr int64_t BulletFireSpeed = 0x159C;   // BulletFireSpeed
		static constexpr int64_t BulletGravityModifier = 0x15CC;// BulletGravityModifier
		static constexpr int64_t VRecoilFactor = 0x1E98;         // 垂直后坐力倍率
		static constexpr int64_t VRecoilModifier = 0x1E9C;       // 垂直修正
		static constexpr int64_t HRecoilFactor = 0x1EA4;         // 水平后坐力倍率
		static constexpr int64_t HRecoilModifier = 0x1EA8;       // 水平修正
		static constexpr int64_t RecoveryFactor = 0x1EB4;      // 恢复速度
	};

	struct ASTExtraVehicleBase
	{
		static constexpr int64_t VehicleCommon = 0x0BD8; // UVehicleCommonComponent*
	};

	struct UVehicleCommonComponent
	{
		static constexpr int64_t HPMax = 0x01EC; // float
		static constexpr int64_t HP = 0x01F0; // float
		static constexpr int64_t WheelsCurrentHP = 0x01F8; // TArray<float>
		static constexpr int64_t FuelMax = 0x0210; // float
		static constexpr int64_t Fuel = 0x0214; // float
	};


};
