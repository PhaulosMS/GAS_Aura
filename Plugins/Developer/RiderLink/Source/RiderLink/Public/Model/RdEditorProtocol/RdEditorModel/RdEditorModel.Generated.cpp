//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.10.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "RdEditorModel.Generated.h"


#include "RdEditorRoot/RdEditorRoot.Generated.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion

RdEditorModel::RdEditorModelSerializersOwner const RdEditorModel::serializersOwner;

void RdEditorModel::RdEditorModelSerializersOwner::registerSerializersCore(rd::Serializers const& serializers) const
{
}

void RdEditorModel::connect(rd::Lifetime lifetime, rd::IProtocol const * protocol)
{
    RdEditorRoot::serializersOwner.registry(protocol->get_serializers());
    
    identify(*(protocol->get_identity()), rd::RdId::Null().mix("RdEditorModel"));
    bind(lifetime, protocol, "RdEditorModel");
}

// constants
// initializer
void RdEditorModel::initialize()
{
    connectionInfo_.optimize_nested = true;
    isGameControlModuleInitialized_.optimize_nested = true;
    unrealLog_.async = true;
    onBlueprintAdded_.async = true;
    serializationHash = 9200473793079031264L;
}
// primary ctor
RdEditorModel::RdEditorModel(rd::RdProperty<ConnectionInfo, rd::Polymorphic<ConnectionInfo>> connectionInfo_, rd::RdSignal<UnrealLogEvent, rd::Polymorphic<UnrealLogEvent>> unrealLog_, rd::RdSignal<BlueprintReference, rd::Polymorphic<BlueprintReference>> openBlueprint_, rd::RdSignal<UClass, rd::Polymorphic<UClass>> onBlueprintAdded_, rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> isBlueprintPathName_, rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> getPathNameByPath_, rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> allowSetForegroundWindow_, rd::RdProperty<bool, rd::Polymorphic<bool>> isGameControlModuleInitialized_, rd::RdSignal<PlayState, rd::Polymorphic<PlayState>> playStateFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestPlayFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestPauseFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestResumeFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestStopFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestFrameSkipFromRider_, rd::RdSignal<RequestResultBase, rd::AbstractPolymorphic<RequestResultBase>> notificationReplyFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> playModeFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> playModeFromRider_, rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> lC_IsEnabledByDefault_, rd::RdSignal<bool, rd::Polymorphic<bool>> lC_EnableByDefault_, rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> lC_IsEnabledForSession_, rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> lC_CanEnableForSession_, rd::RdSignal<bool, rd::Polymorphic<bool>> lC_EnableForSession_, rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> lC_IsCompiling_, rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> lC_HasStarted_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> lC_Compile_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> lC_OnPatchComplete_) :
rd::RdExtBase()
,connectionInfo_(std::move(connectionInfo_)), unrealLog_(std::move(unrealLog_)), openBlueprint_(std::move(openBlueprint_)), onBlueprintAdded_(std::move(onBlueprintAdded_)), isBlueprintPathName_(std::move(isBlueprintPathName_)), getPathNameByPath_(std::move(getPathNameByPath_)), allowSetForegroundWindow_(std::move(allowSetForegroundWindow_)), isGameControlModuleInitialized_(std::move(isGameControlModuleInitialized_)), playStateFromEditor_(std::move(playStateFromEditor_)), requestPlayFromRider_(std::move(requestPlayFromRider_)), requestPauseFromRider_(std::move(requestPauseFromRider_)), requestResumeFromRider_(std::move(requestResumeFromRider_)), requestStopFromRider_(std::move(requestStopFromRider_)), requestFrameSkipFromRider_(std::move(requestFrameSkipFromRider_)), notificationReplyFromEditor_(std::move(notificationReplyFromEditor_)), playModeFromEditor_(std::move(playModeFromEditor_)), playModeFromRider_(std::move(playModeFromRider_)), lC_IsEnabledByDefault_(std::move(lC_IsEnabledByDefault_)), lC_EnableByDefault_(std::move(lC_EnableByDefault_)), lC_IsEnabledForSession_(std::move(lC_IsEnabledForSession_)), lC_CanEnableForSession_(std::move(lC_CanEnableForSession_)), lC_EnableForSession_(std::move(lC_EnableForSession_)), lC_IsCompiling_(std::move(lC_IsCompiling_)), lC_HasStarted_(std::move(lC_HasStarted_)), lC_Compile_(std::move(lC_Compile_)), lC_OnPatchComplete_(std::move(lC_OnPatchComplete_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
RdEditorModel::RdEditorModel()
{
    initialize();
}
// reader
// writer
// virtual init
void RdEditorModel::init(rd::Lifetime lifetime) const
{
    rd::RdExtBase::init(lifetime);
    bindPolymorphic(connectionInfo_, lifetime, this, "connectionInfo");
    bindPolymorphic(unrealLog_, lifetime, this, "unrealLog");
    bindPolymorphic(openBlueprint_, lifetime, this, "openBlueprint");
    bindPolymorphic(onBlueprintAdded_, lifetime, this, "onBlueprintAdded");
    bindPolymorphic(isBlueprintPathName_, lifetime, this, "isBlueprintPathName");
    bindPolymorphic(getPathNameByPath_, lifetime, this, "getPathNameByPath");
    bindPolymorphic(allowSetForegroundWindow_, lifetime, this, "allowSetForegroundWindow");
    bindPolymorphic(isGameControlModuleInitialized_, lifetime, this, "isGameControlModuleInitialized");
    bindPolymorphic(playStateFromEditor_, lifetime, this, "playStateFromEditor");
    bindPolymorphic(requestPlayFromRider_, lifetime, this, "requestPlayFromRider");
    bindPolymorphic(requestPauseFromRider_, lifetime, this, "requestPauseFromRider");
    bindPolymorphic(requestResumeFromRider_, lifetime, this, "requestResumeFromRider");
    bindPolymorphic(requestStopFromRider_, lifetime, this, "requestStopFromRider");
    bindPolymorphic(requestFrameSkipFromRider_, lifetime, this, "requestFrameSkipFromRider");
    bindPolymorphic(notificationReplyFromEditor_, lifetime, this, "notificationReplyFromEditor");
    bindPolymorphic(playModeFromEditor_, lifetime, this, "playModeFromEditor");
    bindPolymorphic(playModeFromRider_, lifetime, this, "playModeFromRider");
    bindPolymorphic(lC_IsEnabledByDefault_, lifetime, this, "lC_IsEnabledByDefault");
    bindPolymorphic(lC_EnableByDefault_, lifetime, this, "lC_EnableByDefault");
    bindPolymorphic(lC_IsEnabledForSession_, lifetime, this, "lC_IsEnabledForSession");
    bindPolymorphic(lC_CanEnableForSession_, lifetime, this, "lC_CanEnableForSession");
    bindPolymorphic(lC_EnableForSession_, lifetime, this, "lC_EnableForSession");
    bindPolymorphic(lC_IsCompiling_, lifetime, this, "lC_IsCompiling");
    bindPolymorphic(lC_HasStarted_, lifetime, this, "lC_HasStarted");
    bindPolymorphic(lC_Compile_, lifetime, this, "lC_Compile");
    bindPolymorphic(lC_OnPatchComplete_, lifetime, this, "lC_OnPatchComplete");
}
// identify
void RdEditorModel::identify(const rd::Identities &identities, rd::RdId const &id) const
{
    rd::RdBindableBase::identify(identities, id);
    identifyPolymorphic(connectionInfo_, identities, id.mix(".connectionInfo"));
    identifyPolymorphic(unrealLog_, identities, id.mix(".unrealLog"));
    identifyPolymorphic(openBlueprint_, identities, id.mix(".openBlueprint"));
    identifyPolymorphic(onBlueprintAdded_, identities, id.mix(".onBlueprintAdded"));
    identifyPolymorphic(isBlueprintPathName_, identities, id.mix(".isBlueprintPathName"));
    identifyPolymorphic(getPathNameByPath_, identities, id.mix(".getPathNameByPath"));
    identifyPolymorphic(allowSetForegroundWindow_, identities, id.mix(".allowSetForegroundWindow"));
    identifyPolymorphic(isGameControlModuleInitialized_, identities, id.mix(".isGameControlModuleInitialized"));
    identifyPolymorphic(playStateFromEditor_, identities, id.mix(".playStateFromEditor"));
    identifyPolymorphic(requestPlayFromRider_, identities, id.mix(".requestPlayFromRider"));
    identifyPolymorphic(requestPauseFromRider_, identities, id.mix(".requestPauseFromRider"));
    identifyPolymorphic(requestResumeFromRider_, identities, id.mix(".requestResumeFromRider"));
    identifyPolymorphic(requestStopFromRider_, identities, id.mix(".requestStopFromRider"));
    identifyPolymorphic(requestFrameSkipFromRider_, identities, id.mix(".requestFrameSkipFromRider"));
    identifyPolymorphic(notificationReplyFromEditor_, identities, id.mix(".notificationReplyFromEditor"));
    identifyPolymorphic(playModeFromEditor_, identities, id.mix(".playModeFromEditor"));
    identifyPolymorphic(playModeFromRider_, identities, id.mix(".playModeFromRider"));
    identifyPolymorphic(lC_IsEnabledByDefault_, identities, id.mix(".lC_IsEnabledByDefault"));
    identifyPolymorphic(lC_EnableByDefault_, identities, id.mix(".lC_EnableByDefault"));
    identifyPolymorphic(lC_IsEnabledForSession_, identities, id.mix(".lC_IsEnabledForSession"));
    identifyPolymorphic(lC_CanEnableForSession_, identities, id.mix(".lC_CanEnableForSession"));
    identifyPolymorphic(lC_EnableForSession_, identities, id.mix(".lC_EnableForSession"));
    identifyPolymorphic(lC_IsCompiling_, identities, id.mix(".lC_IsCompiling"));
    identifyPolymorphic(lC_HasStarted_, identities, id.mix(".lC_HasStarted"));
    identifyPolymorphic(lC_Compile_, identities, id.mix(".lC_Compile"));
    identifyPolymorphic(lC_OnPatchComplete_, identities, id.mix(".lC_OnPatchComplete"));
}
// getters
rd::IProperty<ConnectionInfo> const & RdEditorModel::get_connectionInfo() const
{
    return connectionInfo_;
}
rd::ISignal<UnrealLogEvent> const & RdEditorModel::get_unrealLog() const
{
    return unrealLog_;
}
rd::ISignal<BlueprintReference> const & RdEditorModel::get_openBlueprint() const
{
    return openBlueprint_;
}
rd::ISignal<UClass> const & RdEditorModel::get_onBlueprintAdded() const
{
    return onBlueprintAdded_;
}
rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> const & RdEditorModel::get_isBlueprintPathName() const
{
    return isBlueprintPathName_;
}
rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> const & RdEditorModel::get_getPathNameByPath() const
{
    return getPathNameByPath_;
}
rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> const & RdEditorModel::get_allowSetForegroundWindow() const
{
    return allowSetForegroundWindow_;
}
rd::IProperty<bool> const & RdEditorModel::get_isGameControlModuleInitialized() const
{
    return isGameControlModuleInitialized_;
}
rd::ISignal<PlayState> const & RdEditorModel::get_playStateFromEditor() const
{
    return playStateFromEditor_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestPlayFromRider() const
{
    return requestPlayFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestPauseFromRider() const
{
    return requestPauseFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestResumeFromRider() const
{
    return requestResumeFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestStopFromRider() const
{
    return requestStopFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestFrameSkipFromRider() const
{
    return requestFrameSkipFromRider_;
}
rd::ISignal<RequestResultBase> const & RdEditorModel::get_notificationReplyFromEditor() const
{
    return notificationReplyFromEditor_;
}
rd::ISignal<int32_t> const & RdEditorModel::get_playModeFromEditor() const
{
    return playModeFromEditor_;
}
rd::ISource<int32_t> const & RdEditorModel::get_playModeFromRider() const
{
    return playModeFromRider_;
}
rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> const & RdEditorModel::get_lC_IsEnabledByDefault() const
{
    return lC_IsEnabledByDefault_;
}
rd::ISource<bool> const & RdEditorModel::get_lC_EnableByDefault() const
{
    return lC_EnableByDefault_;
}
rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> const & RdEditorModel::get_lC_IsEnabledForSession() const
{
    return lC_IsEnabledForSession_;
}
rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> const & RdEditorModel::get_lC_CanEnableForSession() const
{
    return lC_CanEnableForSession_;
}
rd::ISource<bool> const & RdEditorModel::get_lC_EnableForSession() const
{
    return lC_EnableForSession_;
}
rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> const & RdEditorModel::get_lC_IsCompiling() const
{
    return lC_IsCompiling_;
}
rd::RdEndpoint<rd::Void, bool, rd::Polymorphic<rd::Void>, rd::Polymorphic<bool>> const & RdEditorModel::get_lC_HasStarted() const
{
    return lC_HasStarted_;
}
rd::ISource<rd::Void> const & RdEditorModel::get_lC_Compile() const
{
    return lC_Compile_;
}
rd::ISignal<rd::Void> const & RdEditorModel::get_lC_OnPatchComplete() const
{
    return lC_OnPatchComplete_;
}
// intern
// equals trait
// equality operators
bool operator==(const RdEditorModel &lhs, const RdEditorModel &rhs) {
    return &lhs == &rhs;
}
bool operator!=(const RdEditorModel &lhs, const RdEditorModel &rhs){
    return !(lhs == rhs);
}
// hash code trait
// type name trait
// static type name trait
// polymorphic to string
std::string RdEditorModel::toString() const
{
    std::string res = "RdEditorModel\n";
    res += "\tconnectionInfo = ";
    res += rd::to_string(connectionInfo_);
    res += '\n';
    res += "\tunrealLog = ";
    res += rd::to_string(unrealLog_);
    res += '\n';
    res += "\topenBlueprint = ";
    res += rd::to_string(openBlueprint_);
    res += '\n';
    res += "\tonBlueprintAdded = ";
    res += rd::to_string(onBlueprintAdded_);
    res += '\n';
    res += "\tisBlueprintPathName = ";
    res += rd::to_string(isBlueprintPathName_);
    res += '\n';
    res += "\tgetPathNameByPath = ";
    res += rd::to_string(getPathNameByPath_);
    res += '\n';
    res += "\tallowSetForegroundWindow = ";
    res += rd::to_string(allowSetForegroundWindow_);
    res += '\n';
    res += "\tisGameControlModuleInitialized = ";
    res += rd::to_string(isGameControlModuleInitialized_);
    res += '\n';
    res += "\tplayStateFromEditor = ";
    res += rd::to_string(playStateFromEditor_);
    res += '\n';
    res += "\trequestPlayFromRider = ";
    res += rd::to_string(requestPlayFromRider_);
    res += '\n';
    res += "\trequestPauseFromRider = ";
    res += rd::to_string(requestPauseFromRider_);
    res += '\n';
    res += "\trequestResumeFromRider = ";
    res += rd::to_string(requestResumeFromRider_);
    res += '\n';
    res += "\trequestStopFromRider = ";
    res += rd::to_string(requestStopFromRider_);
    res += '\n';
    res += "\trequestFrameSkipFromRider = ";
    res += rd::to_string(requestFrameSkipFromRider_);
    res += '\n';
    res += "\tnotificationReplyFromEditor = ";
    res += rd::to_string(notificationReplyFromEditor_);
    res += '\n';
    res += "\tplayModeFromEditor = ";
    res += rd::to_string(playModeFromEditor_);
    res += '\n';
    res += "\tplayModeFromRider = ";
    res += rd::to_string(playModeFromRider_);
    res += '\n';
    res += "\tlC_IsEnabledByDefault = ";
    res += rd::to_string(lC_IsEnabledByDefault_);
    res += '\n';
    res += "\tlC_EnableByDefault = ";
    res += rd::to_string(lC_EnableByDefault_);
    res += '\n';
    res += "\tlC_IsEnabledForSession = ";
    res += rd::to_string(lC_IsEnabledForSession_);
    res += '\n';
    res += "\tlC_CanEnableForSession = ";
    res += rd::to_string(lC_CanEnableForSession_);
    res += '\n';
    res += "\tlC_EnableForSession = ";
    res += rd::to_string(lC_EnableForSession_);
    res += '\n';
    res += "\tlC_IsCompiling = ";
    res += rd::to_string(lC_IsCompiling_);
    res += '\n';
    res += "\tlC_HasStarted = ";
    res += rd::to_string(lC_HasStarted_);
    res += '\n';
    res += "\tlC_Compile = ";
    res += rd::to_string(lC_Compile_);
    res += '\n';
    res += "\tlC_OnPatchComplete = ";
    res += rd::to_string(lC_OnPatchComplete_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const RdEditorModel & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

