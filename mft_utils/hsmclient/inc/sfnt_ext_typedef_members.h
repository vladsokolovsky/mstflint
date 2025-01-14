/*
 * Copyright (c) 2020-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* WARNING: This is a generated file. Do not edit.*/
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_WaitForSlotEvent)(CK_FLAGS flags,CK_ULONG * history,CK_SLOT_ID_PTR pSlot,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitIndirectToken)(CK_SLOT_ID slotID,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_CHAR_PTR pLabel,CK_SESSION_HANDLE hPrimarySession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitIndirectPIN)(CK_SESSION_HANDLE hSession,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_SESSION_HANDLE hPrimarySession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ResetPIN)(CK_SESSION_HANDLE hSession,CK_CHAR_PTR pPin,CK_ULONG usPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitRolePIN)(CK_SESSION_HANDLE hSession,CK_USER_TYPE userType,CK_CHAR_PTR pPin,CK_ULONG usPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitSlotRolePIN)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotID,CK_USER_TYPE userType,CK_CHAR_PTR pPin,CK_ULONG usPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_RoleStateGet)(CK_SLOT_ID slotID,CK_USER_TYPE userType,CA_ROLE_STATE * pRoleState);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CreateLoginChallenge)(CK_SESSION_HANDLE hSession,CK_USER_TYPE userType,CK_ULONG ulChallengeDataSize,CK_CHAR_PTR pChallengeData,CK_ULONG_PTR ulOutputDataSize,CK_CHAR_PTR pOutputData);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CreateContainerLoginChallenge)(CK_SESSION_HANDLE hSession,CK_SLOT_ID targetSlotID,CK_USER_TYPE userType,CK_ULONG ulChallengeDataSize,CK_CHAR_PTR pChallengeData,CK_ULONG_PTR ulOutputDataSize,CK_CHAR_PTR pOutputData);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Deactivate)(CK_SLOT_ID slotId,CK_USER_TYPE userType);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FindAdminSlotForSlot)(CK_SLOT_ID inputSlot,CK_SLOT_ID* pSlotId,CK_SLOT_ID* pPrevSlotId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TokenInsert)(CK_SESSION_HANDLE hSession,const CT_TokenHndle token,CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TokenInsertNoAuth)(const CT_TokenHndle token,CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TokenZeroize)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotID,CK_FLAGS flags);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TokenDelete)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetFirmwareVersion)(CK_SLOT_ID slotID,CK_ULONG_PTR fwMajor,CK_ULONG_PTR fwMinor,CK_ULONG_PTR fwSubminor);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_OpenSession)(CK_SLOT_ID slotID,CK_ULONG ulContainerNumber,CK_FLAGS flags,CK_VOID_PTR pApplication,CK_NOTIFY Notify,CK_SESSION_HANDLE_PTR phSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_OpenSessionWithAppID)(CK_SLOT_ID slotID,CK_FLAGS flags,CK_ULONG ulHigh,CK_ULONG ulLow,CK_VOID_PTR pApplication,CK_NOTIFY Notify,CK_SESSION_HANDLE_PTR phSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_IndirectLogin)(CK_SESSION_HANDLE hSession,CK_USER_TYPE userType,CK_SESSION_HANDLE hPrimarySession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitializeRemotePEDVector)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DeleteRemotePEDVector)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetRemotePEDVectorStatus)(CK_SLOT_ID slotID,CK_ULONG_PTR pulStatus);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ConfigureRemotePED)(CK_SLOT_ID slotId,CK_CHAR_PTR pHostName,CK_ULONG ulPort,CK_ULONG_PTR pulPedId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DismantleRemotePED)(CK_SLOT_ID slotId,CK_ULONG ulPedId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Restart)(CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_RestartForContainer)(CK_SLOT_ID slotID,CK_ULONG ulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloseApplicationID)(CK_SLOT_ID slotID,CK_ULONG ulHigh,CK_ULONG ulLow);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloseApplicationIDForContainer)(CK_SLOT_ID slotID,CK_ULONG ulHigh,CK_ULONG ulLow,CK_ULONG ulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_OpenApplicationID)(CK_SLOT_ID slotID,CK_ULONG ulHigh,CK_ULONG ulLow);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_OpenApplicationIDForContainer)(CK_SLOT_ID slotID,CK_ULONG ulHigh,CK_ULONG ulLow,CK_ULONG ulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetApplicationID)(CK_ULONG ulHigh,CK_ULONG ulLow);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ManualKCV)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetLKCV)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pLegacyCloningDomainString,CK_ULONG ulLegacyCloningDomainStringLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetKCV)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pCloningDomainString,CK_ULONG ulCloningDomainStringLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetRDK)(CK_SESSION_HANDLE hSession,const CK_BYTE * pCloningDomainString,CK_ULONG ulCloningDomainStringLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetCloningDomain)(CK_BYTE_PTR pCloningDomainString,CK_ULONG ulCloningDomainStringLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ClonePrivateKey)(CK_SESSION_HANDLE hTargetSession,CK_SESSION_HANDLE hSourceSession,CK_OBJECT_HANDLE hObjectToCloneHandle,CK_OBJECT_HANDLE_PTR phClonedKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneObject)(CK_SESSION_HANDLE hTargetSession,CK_SESSION_HANDLE hSourceSession,CK_ULONG ulObjectType,CK_OBJECT_HANDLE hObjectHandle,CK_OBJECT_HANDLE_PTR phClonedObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GenerateCloningKEV)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pKEV,CK_ULONG_PTR pulKEVSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneAsTargetInit)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pTWC,CK_ULONG ulTWCSize,CK_BYTE_PTR pKEV,CK_ULONG ulKEVSize,CK_BBOOL bReplicate,CK_BYTE_PTR pPart1,CK_ULONG_PTR pulPart1Size);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneAsSource)(CK_SESSION_HANDLE hSession,CK_ULONG hType,CK_ULONG hHandle,CK_BYTE_PTR pPart1,CK_ULONG ulPart1Size,CK_BBOOL bReplicate,CK_BYTE_PTR pPart2,CK_ULONG_PTR pulPart2Size);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneAsTarget)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pKEV,CK_ULONG ulKEVSize,CK_BYTE_PTR pPart2,CK_ULONG ulPart2Size,CK_ULONG hType,CK_ULONG hHandle,CK_BBOOL bReplicate,CK_OBJECT_HANDLE_PTR phClonedHandle);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetMofN)(CK_BBOOL bFlag);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GenerateMofN)(CK_SESSION_HANDLE hSession,CK_ULONG ulM,CA_MOFN_GENERATION_PTR pVectors,CK_ULONG ulVectorCount,CK_ULONG isSecurePortUsed,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GenerateCloneableMofN)(CK_SESSION_HANDLE hSession,CK_ULONG ulM,CA_MOFN_GENERATION_PTR pVectors,CK_ULONG ulVectorCount,CK_ULONG isSecurePortUsed,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ModifyMofN)(CK_SESSION_HANDLE hSession,CK_ULONG ulM,CA_MOFN_GENERATION_PTR pVectors,CK_ULONG ulVectorCount,CK_ULONG isSecurePortUsed,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneMofN)(CK_SESSION_HANDLE hSession,CK_SESSION_HANDLE hPrimarySession,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneModifyMofN)(CK_SESSION_HANDLE hSession,CK_SESSION_HANDLE hPrimarySession,CK_VOID_PTR pReserved);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ActivateMofN)(CK_SESSION_HANDLE hSession,CA_MOFN_ACTIVATION_PTR pVectors,CK_ULONG ulVectorCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DeactivateMofN)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetMofNStatus)(CK_SLOT_ID slotID,CA_MOFN_STATUS_PTR pMofNStatus);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DuplicateMofN)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_IsMofNEnabled)(CK_SLOT_ID slotID,CK_ULONG_PTR enabled);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_IsMofNRequired)(CK_SLOT_ID slotID,CK_ULONG_PTR required);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GenerateTokenKeys)(CK_SESSION_HANDLE hSession,CK_ATTRIBUTE_PTR pTemplate,CK_ULONG usTemplateLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GenerateTWK)(CK_SLOT_ID slotID,CK_SESSION_HANDLE hSession,CK_ULONG ulKeyType,CK_ULONG ulExpSize,CK_BYTE_PTR pExponent,CK_ULONG ulModulusBitSize,CK_ULONG_PTR pulModSize,CK_BYTE_PTR pModulus);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenCertificateInfo)(CK_SLOT_ID slotID,CK_ULONG ulAccessLevel,CK_BYTE_PTR pCertificate,CK_ULONG_PTR pulCertificateLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetTokenCertificateSignature)(CK_SESSION_HANDLE hSession,CK_ULONG ulAccessLevel,CK_ULONG ulCustomerId,CK_ATTRIBUTE_PTR pPublicTemplate,CK_ULONG usPublicTemplateLen,CK_BYTE_PTR pSignature,CK_ULONG ulSignatureLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetModuleList)(CK_SLOT_ID slotId,CKCA_MODULE_ID_PTR pList,CK_ULONG ulListLen,CK_ULONG_PTR pulReturnedSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetModuleInfo)(CK_SLOT_ID slotId,CKCA_MODULE_ID moduleId,CKCA_MODULE_INFO_PTR pInfo);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LoadModule)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pModuleCode,CK_ULONG ulModuleCodeSize,CK_BYTE_PTR pModuleSignature,CK_ULONG ulModuleSignatureSize,CK_BYTE_PTR pCertificate,CK_ULONG ulCertificateSize,CK_BYTE_PTR pControlData,CK_ULONG ulControlDataSize,CKCA_MODULE_ID_PTR pModuleId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LoadEncryptedModule)(CK_SESSION_HANDLE hSession,CK_OBJECT_HANDLE hKey,CK_BYTE_PTR pIv,CK_ULONG ulIvLen,CK_BYTE_PTR pModuleCode,CK_ULONG ulModuleCodeSize,CK_BYTE_PTR pModuleSignature,CK_ULONG ulModuleSignatureSize,CK_BYTE_PTR pCertificate,CK_ULONG ulCertificateSize,CKCA_MODULE_ID_PTR pModuleId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_UnloadModule)(CK_SESSION_HANDLE hSession,CKCA_MODULE_ID moduleId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_PerformModuleCall)(CK_SESSION_HANDLE hSession,CKCA_MODULE_ID moduleId,CK_BYTE_PTR pRequest,CK_ULONG ulRequestSize,CK_BYTE_PTR pAnswer,CK_ULONG ulAnswerSize,CK_ULONG_PTR pulAnswerAvailable);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FirmwareUpdate)(CK_SESSION_HANDLE hSession,CK_ULONG ulTargetHardwarePlatform,CK_ULONG ulAuthCodeLen,CK_BYTE_PTR pAuthCode,CK_ULONG ulManifestLen,CK_BYTE_PTR pManifest,CK_ULONG ulFirmwareLen,CK_BYTE_PTR pFirmware);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FirmwareRollback)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CapabilityUpdate)(CK_SESSION_HANDLE hSession,CK_ULONG ulManifestLen,CK_BYTE_PTR pManifest,CK_ULONG ulAuthcodeLen,CK_BYTE_PTR pAuthcode);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetUserContainerNumber)(CK_SLOT_ID slotID,CK_ULONG_PTR pulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetUserContainerName)(CK_SLOT_ID slotID,CK_BYTE_PTR pName,CK_ULONG_PTR pulNameLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetUserContainerName)(CK_SLOT_ID slotID,CK_BYTE_PTR pName,CK_ULONG ulNameLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenInsertionCount)(CK_SLOT_ID slotID,CK_ULONG_PTR pulCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetRollbackFirmwareVersion)(CK_SLOT_ID slotID,CK_ULONG_PTR pulVersion);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetFPV)(CK_SLOT_ID slotID,CK_ULONG_PTR pulFpv);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTPV)(CK_SLOT_ID slotID,CK_ULONG_PTR pulTpv);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetExtendedTPV)(CK_SLOT_ID slotID,CK_ULONG_PTR pulTpv,CK_ULONG_PTR pulTpvExt);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetConfigurationElementDescription)(CK_SLOT_ID slotID,CK_ULONG ulIsContainerElement,CK_ULONG ulIsCapabilityElement,CK_ULONG ulElementId,CK_ULONG_PTR pulElementBitLength,CK_ULONG_PTR pulElementDestructive,CK_ULONG_PTR pulElementWriteRestricted,CK_CHAR_PTR pDescription,CK_ULONG_PTR pDesBufSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMCapabilitySet)(CK_SLOT_ID uPhysicalSlot,CK_ULONG_PTR pulCapIdArray,CK_ULONG_PTR pulCapIdSize,CK_ULONG_PTR pulCapValArray,CK_ULONG_PTR pulCapValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMCapabilitySetting)(CK_SLOT_ID slotID,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMPolicySet)(CK_SLOT_ID uPhysicalSlot,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyIdSize,CK_ULONG_PTR pulPolicyValArray,CK_ULONG_PTR pulPolicyValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMPolicySetting)(CK_SLOT_ID slotID,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerCapabilitySet)(CK_SLOT_ID uPhysicalSlot,CK_ULONG ulContainerNumber,CK_ULONG_PTR pulCapIdArray,CK_ULONG_PTR pulCapIdSize,CK_ULONG_PTR pulCapValArray,CK_ULONG_PTR pulCapValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerCapabilitySetting)(CK_SLOT_ID slotID,CK_ULONG ulContainerNumber,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerPolicySet)(CK_SLOT_ID uPhysicalSlot,CK_ULONG ulContainerNumber,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyIdSize,CK_ULONG_PTR pulPolicyValArray,CK_ULONG_PTR pulPolicyValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerPolicySetting)(CK_SLOT_ID uPhysicalSlot,CK_ULONG ulContainerNumber,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetPartitionPolicyTemplate)(CK_SLOT_ID uPhysicalSlot,CK_ULONG_PTR pulVersion,CK_ULONG_PTR pulBufSize,CK_BYTE_PTR pbBuf);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetTPV)(CK_SESSION_HANDLE hSession,CK_ULONG ulTpv);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetExtendedTPV)(CK_SESSION_HANDLE hSession,CK_ULONG ulTpv,CK_ULONG ulTpvExt);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetHSMPolicy)(CK_SESSION_HANDLE hSession,CK_ULONG ulPolicyId,CK_ULONG ulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetHSMPolicies)(CK_SESSION_HANDLE hSession,CK_ULONG ulPolicyCount,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyValueArray);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetDestructiveHSMPolicy)(CK_SESSION_HANDLE hSession,CK_ULONG ulPolicyId,CK_ULONG ulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetDestructiveHSMPolicies)(CK_SESSION_HANDLE hSession,CK_ULONG ulPolicyCount,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyValueArray);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetContainerPolicy)(CK_SESSION_HANDLE hSession,CK_ULONG ulContainer,CK_ULONG ulPolicyId,CK_ULONG ulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetContainerPolicies)(CK_SESSION_HANDLE hSession,CK_ULONG ulContainer,CK_ULONG ulPolicyCount,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyValueArray);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenCapabilities)(CK_SLOT_ID ulSlotID,CK_ULONG_PTR pulCapIdArray,CK_ULONG_PTR pulCapIdSize,CK_ULONG_PTR pulCapValArray,CK_ULONG_PTR pulCapValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetTokenPolicies)(CK_SESSION_HANDLE hSession,CK_SLOT_ID ulSlotID,CK_ULONG ulPolicyCount,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyValueArray);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenPolicies)(CK_SLOT_ID ulSlotID,CK_ULONG_PTR pulPolicyIdArray,CK_ULONG_PTR pulPolicyIdSize,CK_ULONG_PTR pulPolicyValArray,CK_ULONG_PTR pulPolicyValSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_RetrieveLicenseList)(CK_SLOT_ID slotID,CK_ULONG_PTR pulidArraySize,CK_ULONG_PTR pulidArray);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_QueryLicense)(CK_SLOT_ID slotID,CK_ULONG licenseIdLow,CK_ULONG licenseIdHigh,CK_ULONG_PTR pulLicenseType,CK_ULONG_PTR pulDescVersion,CK_ULONG_PTR pulDescSize,CK_BYTE_PTR pbDescBuffer);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerStatus)(CK_SLOT_ID slotID,CK_ULONG ulContainerNumber,CK_ULONG_PTR pulContainerStatusFlags,CK_ULONG_PTR pulFailedSOLogins,CK_ULONG_PTR pulFailedUserLogins,CK_ULONG_PTR pulFailedLimitedUserLogins);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenStatus)(CK_SLOT_ID slotID,CK_ULONG_PTR pulStatusFlags,CK_ULONG_PTR pulCurSessionCnt,CK_ULONG_PTR pulCurRdWrSessionCnt);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSessionInfo)(CK_SESSION_HANDLE hSession,CK_ULONG_PTR pulAidHigh,CK_ULONG_PTR pulAidLow,CK_ULONG_PTR pulContainerNumber,CK_ULONG_PTR pulAuthenticationLevel);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReadCommonStore)(CK_ULONG index,CK_BYTE_PTR pBuffer,CK_ULONG_PTR pulBufferSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_WriteCommonStore)(CK_ULONG index,CK_BYTE_PTR pBuffer,CK_ULONG ulBufferSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetPrimarySlot)(CK_SESSION_HANDLE hSession,CK_SLOT_ID_PTR slotId_p);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSecondarySlot)(CK_SESSION_HANDLE hSession,CK_SLOT_ID_PTR slotId_p);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SwitchSecondarySlot)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotID,CK_ULONG slotInstance);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloseSecondarySession)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotID,CK_ULONG slotInstance);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloseAllSecondarySessions)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ChoosePrimarySlot)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ChooseSecondarySlot)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneObjectToAllSessions)(CK_SESSION_HANDLE hSession,CK_OBJECT_HANDLE hObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloneAllObjectsToSession)(CK_SESSION_HANDLE hSession,CK_SLOT_ID slotId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ResetDevice)(CK_SLOT_ID slotId,CK_FLAGS flags);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Zeroize)(CK_SLOT_ID slotId,CK_FLAGS flags);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FactoryReset)(CK_SLOT_ID slotId,CK_FLAGS flags);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetPedId)(CK_SLOT_ID slotId,CK_ULONG usPedId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetPedId)(CK_SLOT_ID slotId,CK_ULONG * usPedId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SpRawRead)(CK_SLOT_ID slotId,CK_ULONG_PTR data);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SpRawWrite)(CK_SLOT_ID slotId,CK_ULONG_PTR data);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CheckOperationState)(CK_SESSION_HANDLE hSession,CK_ULONG operation,CK_BBOOL * pactive);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DestroyMultipleObjects)(CK_SESSION_HANDLE hSession,CK_ULONG ulHandleCount,CK_OBJECT_HANDLE_PTR pHandleList,CK_ULONG_PTR pulIndex);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_OpenSecureToken)(CK_SESSION_HANDLE hSession,CK_ULONG storagePath,CK_ULONG devID,CK_ULONG mode,CK_ULONG pedId,CK_ULONG_PTR numberOfElems,CK_ULONG_PTR phID,CK_ULONG ParNameLength,CK_CHAR_PTR pPartitionName);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CloseSecureToken)(CK_SESSION_HANDLE hSession,CK_ULONG hID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ListSecureTokenInit)(CK_SESSION_HANDLE hSession,CK_ULONG hID,CK_ULONG PartNameSize,CK_ULONG_PTR numElements,CK_ULONG_PTR filenameLen,CK_BYTE_PTR pPartName);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ListSecureTokenUpdate)(CK_SESSION_HANDLE hSession,CK_ULONG hID,CK_ULONG index,CK_BYTE_PTR pData,CK_ULONG dataLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSecureElementMeta)(CK_SESSION_HANDLE hSession,CK_ULONG hID,CK_MECHANISM_PTR pMechanism,CK_ULONG_PTR pObjClass,CK_ULONG_PTR pKeyType,CK_BYTE_PTR pLabel,CK_ULONG ulLabelLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Bip32ExportPublicKey)(CK_SESSION_HANDLE hSession,CK_ULONG ulObjectHandle,CK_BYTE_PTR pPublicSerialData,CK_ULONG_PTR pulPublicSerialLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Bip32ImportPublicKey)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pBase58Key,CK_ULONG usKeyLen,CK_ATTRIBUTE_PTR pTemplate,CK_ULONG usCount,CK_OBJECT_HANDLE_PTR phImportedObject);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAInit)(CK_SESSION_HANDLE hSession,CK_OBJECT_HANDLE hLoginPrivateKey);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAGetMasterPublic)(CK_SLOT_ID slotId,CK_BYTE_PTR pCertificate,CK_ULONG_PTR pulCertificate);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAGetLoginChallenge)(CK_SESSION_HANDLE hSession,CK_USER_TYPE userType,CK_BYTE_PTR pCertificate,CK_ULONG ulCertificateLen,CK_BYTE_PTR pChallengeBlob,CK_ULONG_PTR pulChallengeBlobLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAAnswerLoginChallenge)(CK_SESSION_HANDLE hSession,CK_OBJECT_HANDLE hLoginPrivateKey,CK_BYTE_PTR pChallengeBlob,CK_ULONG ulChallengeBlobLen,CK_BYTE_PTR pEncryptedPin,CK_ULONG_PTR pulEncryptedPinLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HALogin)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pEncryptedPin,CK_ULONG ulEncryptedPinLen,CK_BYTE_PTR pMofNBlob,CK_ULONG_PTR pulMofNBlobLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAAnswerMofNChallenge)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pMofNBlob,CK_ULONG ulMofNBlobLen,CK_BYTE_PTR pMofNSecretBlob,CK_ULONG_PTR pulMofNSecretBlobLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_HAActivateMofN)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pMofNSecretBlob,CK_ULONG ulMofNSecretBlobLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHAState)(CK_SLOT_ID slotId,CK_HA_STATE_PTR pState);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenCertificates)(CK_SLOT_ID slotID,CK_ULONG ulCertType,CK_BYTE_PTR pCertificate,CK_ULONG_PTR pulCertificateLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ExtractMaskedObject)(CK_SESSION_HANDLE hSession,CK_ULONG ulObjectHandle,CK_BYTE_PTR pMaskedKey,CK_ULONG_PTR pusMaskedKeyLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InsertMaskedObject)(CK_SESSION_HANDLE hSession,CK_ULONG_PTR pulObjectHandle,CK_BYTE_PTR pMaskedKey,CK_ULONG usMaskedKeyLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MultisignValue)(CK_SESSION_HANDLE hSession,CK_MECHANISM_PTR pMechanism,CK_ULONG ulMaskedKeyLen,CK_BYTE_PTR pMaskedKey,CK_ULONG_PTR pulBlobCount,CK_ULONG_PTR pulBlobLens,CK_BYTE_PTR CK_PTR ppBlobs,CK_ULONG_PTR pulSignatureLens,CK_BYTE_PTR CK_PTR ppSignatures);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SIMExtract)(CK_SESSION_HANDLE hSession,CK_ULONG ulHandleCount,CK_OBJECT_HANDLE_PTR pHandleList,CK_ULONG ulAuthSecretCount,CK_ULONG ulAuthSubsetCount,CKA_SIM_AUTH_FORM authForm,CK_ULONG_PTR pulAuthSecretSizes,CK_BYTE_PTR * ppbAuthSecretList,CK_BBOOL deleteAfterExtract,CK_ULONG_PTR pulBlobSize,CK_BYTE_PTR pBlob);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SIMInsert)(CK_SESSION_HANDLE hSession,CK_ULONG ulAuthSecretCount,CKA_SIM_AUTH_FORM authForm,CK_ULONG_PTR pulAuthSecretSizes,CK_BYTE_PTR * ppbAuthSecretList,CK_ULONG ulBlobSize,CK_BYTE_PTR pBlob,CK_ULONG_PTR pulHandleCount,CK_OBJECT_HANDLE_PTR pHandleList);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SIMMultiSign)(CK_SESSION_HANDLE hSession,CK_MECHANISM_PTR pMechanism,CK_ULONG ulAuthSecretCount,CKA_SIM_AUTH_FORM authForm,CK_ULONG_PTR pulAuthSecretSizes,CK_BYTE_PTR * ppbAuthSecretList,CK_ULONG ulBlobSize,CK_BYTE_PTR pBlob,CK_ULONG ulInputDataCount,CK_ULONG_PTR pulInputDataLengths,CK_BYTE_PTR * ppbInputDataList,CK_ULONG_PTR pulSignatureLengths,CK_BYTE_PTR * ppbSignatureList);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Extract)(CK_SESSION_HANDLE hSession,CK_MECHANISM_PTR pMechanism);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Insert)(CK_SESSION_HANDLE hSession,CK_MECHANISM_PTR pMechanism);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenObjectUID)(CK_SLOT_ID slotID,CK_ULONG ulObjectType,CK_ULONG ulObjectHandle,CK_BYTE * ouid);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenObjectHandle)(CK_SLOT_ID slotID,CK_BYTE * ouid,CK_ULONG_PTR pulObjectType,CK_ULONG_PTR pulObjectHandle);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetObjectUID)(CK_SLOT_ID slotID,CK_ULONG ulContainerNum,CK_ULONG ulObjectType,CK_ULONG ulObjectHandle,CK_BYTE * ouid);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetObjectHandle)(CK_SLOT_ID slotID,CK_ULONG ulContainerNum,CK_BYTE * ouid,CK_ULONG_PTR pulObjectType,CK_ULONG_PTR pulObjectHandle);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DeleteContainer)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MTKSetStorage)(CK_SESSION_HANDLE ulSessionNumber,CK_ULONG ulStorageSetting);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MTKRestore)(CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MTKResplit)(CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MTKZeroize)(CK_SLOT_ID slotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MTKGetState)(CK_SLOT_ID slotID,CK_ULONG_PTR state);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TamperClear)(CK_SESSION_HANDLE ulSessionNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STMToggle)(CK_SESSION_HANDLE ulSessionNumber,CK_ULONG ulValue,CK_ULONG ulInputDataSize,CK_CHAR_PTR pInputData,CK_ULONG_PTR pulOutputDataSize,CK_CHAR_PTR pOutputData);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STMGetState)(CK_SLOT_ID slotID,CK_ULONG_PTR state);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTSV)(CK_SLOT_ID slotID,CK_ULONG_PTR pTSV);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InvokeServiceInit)(CK_SESSION_HANDLE hSession,CK_ULONG ulPortNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InvokeService)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pBufferIn,CK_ULONG ulBufferInLength,CK_ULONG_PTR pulBufferOutLength);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InvokeServiceFinal)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pBufferOut,CK_ULONG_PTR pulBufferOutLength);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InvokeServiceAsynch)(CK_SESSION_HANDLE hSession,CK_ULONG ulPortNumber,CK_BYTE_PTR pBufferIn,CK_ULONG ulBufferInLength);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InvokeServiceSinglePart)(CK_SESSION_HANDLE hSession,CK_ULONG ulPortNumber,CK_BYTE_PTR pBufferIn,CK_ULONG ulBufferInLength,CK_BYTE_PTR pBufferOut,CK_ULONG_PTR pulBufferOutLength);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_EncodeECPrimeParams)(CK_BYTE_PTR DerECParams,CK_ULONG_PTR DerECParamsLen,CK_BYTE_PTR prime,CK_ULONG primelen,CK_BYTE_PTR a,CK_ULONG alen,CK_BYTE_PTR b,CK_ULONG blen,CK_BYTE_PTR seed,CK_ULONG seedlen,CK_BYTE_PTR x,CK_ULONG xlen,CK_BYTE_PTR y,CK_ULONG ylen,CK_BYTE_PTR order,CK_ULONG orderlen,CK_BYTE_PTR cofactor,CK_ULONG cofactorlen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_EncodeECChar2Params)(CK_BYTE_PTR DerECParams,CK_ULONG_PTR DerECParamsLen,CK_ULONG m,CK_ULONG k1,CK_ULONG k2,CK_ULONG k3,CK_BYTE_PTR a,CK_ULONG alen,CK_BYTE_PTR b,CK_ULONG blen,CK_BYTE_PTR seed,CK_ULONG seedlen,CK_BYTE_PTR x,CK_ULONG xlen,CK_BYTE_PTR y,CK_ULONG ylen,CK_BYTE_PTR order,CK_ULONG orderlen,CK_BYTE_PTR cofactor,CK_ULONG cofactorlen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_EncodeECParamsFromFile)(CK_BYTE_PTR DerECParams,CK_ULONG_PTR DerECParamsLen,CK_BYTE_PTR paramsFile);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMStats)(CK_SLOT_ID slotID,CK_ULONG ulStatsIdsCount,CK_ULONG_PTR pStatsIds,HSM_STATS_PARAMS * pStatsParams);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetHSMStorageInformation)(CK_SLOT_ID slotID,CK_ULONG_PTR pulContainerOverhead,CK_ULONG_PTR pulTotal,CK_ULONG_PTR pulUsed,CK_ULONG_PTR pulFree);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTokenStorageInformation)(CK_SLOT_ID slotID,CK_ULONG_PTR pulContainerOverhead,CK_ULONG_PTR pulTotal,CK_ULONG_PTR pulUsed,CK_ULONG_PTR pulFree,CK_ULONG_PTR pulObjectCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerStorageInformation)(CK_SLOT_ID slotID,CK_ULONG ulContainerNumber,CK_ULONG_PTR pulContainerOverhead,CK_ULONG_PTR pulTotal,CK_ULONG_PTR pulUsed,CK_ULONG_PTR pulFree,CK_ULONG_PTR pulObjectCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_SetContainerSize)(CK_SESSION_HANDLE hSession,CK_ULONG ulContainerNumber,CK_ULONG ulSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CreateContainerWithPolicy)(CK_SESSION_HANDLE hSession,CK_ULONG ulUSV,CK_CHAR_PTR pContainerName,CK_ULONG usContainerNameLen,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_ULONG ulIDHigh,CK_ULONG ulIDLow,CK_ULONG ulOwnerHandle,CK_ULONG ulStorageFlags,CK_ULONG ulContainerSize,CK_ULONG_PTR pulContainerNumber,CK_ULONG policyVersion,CK_ULONG policySize,CK_BYTE_PTR pPolicyBuf);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_CreateContainer)(CK_SESSION_HANDLE hSession,CK_ULONG ulUSV,CK_CHAR_PTR pContainerName,CK_ULONG usContainerNameLen,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_ULONG ulIDHigh,CK_ULONG ulIDLow,CK_ULONG ulOwnerHandle,CK_ULONG ulStorageFlags,CK_ULONG ulContainerSize,CK_ULONG_PTR pulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitAudit)(CK_SLOT_ID slotID,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_CHAR_PTR pLabel);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogVerify)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pLogMsgs,CK_ULONG ulMsgCount,CK_ULONG bChainToHSM,CK_ULONG_PTR pulNumVerified);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogVerifyFile)(CK_SESSION_HANDLE hSession,CK_CHAR_PTR pFileName,CK_ULONG_PTR ulNumVerified);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogExternal)(CK_SLOT_ID slotID,CK_SESSION_HANDLE hSession,const CK_CHAR * pStr,CK_ULONG ulLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogImportSecret)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pStr,CK_ULONG strSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogExportSecret)(CK_SESSION_HANDLE hSession,CK_BYTE_PTR pStr,CK_ULONG_PTR pStrSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TimeSync)(CK_SESSION_HANDLE hSession,CK_ULONG ulTime);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTime)(CK_SESSION_HANDLE hSession,CK_ULONG_PTR pulTime);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogSetConfig)(CK_SESSION_HANDLE hSession,CK_ULONG mask,CK_ULONG logRotateOffset,CK_ULONG logRotateInterval,CK_ULONG maxLogSize,CK_BYTE_PTR pLogPath);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogGetConfig)(CK_SESSION_HANDLE hSession,CK_ULONG * mask,CK_ULONG * logRotateOffset,CK_ULONG * logRotateInterval,CK_ULONG * maxLogSize,CK_BYTE_PTR pLogPath);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReplaceFastPathKEK)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LogGetStatus)(CK_SLOT_ID slotId,CK_ULONG * auditInitStatus,CK_ULONG * lastPollResult,CK_ULONG * lastSetConfigResult,CK_ULONG * isConfigInParamArea,CK_ULONG * numRecordsInFlash);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DeleteContainerWithHandle)(CK_SESSION_HANDLE hSession,CK_ULONG ulContainerNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerList)(CK_SLOT_ID slotID,CK_ULONG ulGroupHandle,CK_ULONG ulContainerType,CK_ULONG_PTR pulContainerHandles,CK_ULONG_PTR pulNumberOfHandles);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetContainerName)(CK_SLOT_ID slotID,CK_ULONG ulContainerHandle,CK_BYTE_PTR pContainerName,CK_ULONG_PTR pulContainerNameLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetNumberOfAllowedContainers)(CK_SLOT_ID slot,CK_ULONG_PTR pulAllowedContainers);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetTunnelSlotNumber)(CK_SLOT_ID slotID,CK_SLOT_ID_PTR pTunnelSlotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetClusterState)(CK_SLOT_ID slotId,CK_CLUSTER_STATE_PTR pState);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_LockClusteredSlot)(CK_SLOT_ID slotId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_UnlockClusteredSlot)(CK_SLOT_ID slotId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ModifyUsageCount)(CK_SESSION_HANDLE hSession,CK_OBJECT_HANDLE hObject,CK_ULONG ulCommandType,CK_ULONG ulValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_EnableUnauthTokenInsertion)(CK_SESSION_HANDLE hSession,CK_ULONG ulMaxUsageCount,CK_ULONG_PTR ulContextHandle);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetUnauthTokenInsertionStatus)(CK_SESSION_HANDLE hSession,CK_ULONG ulContextHandle,CK_ULONG * pulMaxUsageCount,CK_ULONG * pulCurUsageCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DisableUnauthTokenInsertion)(CK_SESSION_HANDLE hSession,CK_ULONG ulContextHandle);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCRegister)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetSlotID,const CK_CHAR * username,CK_ULONG access,const CK_CHAR * pmod,CK_ULONG mod_len,const CK_CHAR * pexp,CK_ULONG exp_len);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCDeregister)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetslotID,const CK_CHAR * username);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetPubKey)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetSlotID,const CK_CHAR * username,CK_CHAR * pmod,CK_ULONG_PTR mod_len,CK_CHAR * pexp,CK_ULONG_PTR exp_len);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetClientsList)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetSlotID,CK_ULONG_PTR pulCIDArray,CK_ULONG_PTR pulCIDArraySize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetClientInfo)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetSlotID,CK_ULONG ulHandke,CK_CHAR * username,CK_ULONG_PTR name_len,CK_ULONG_PTR access,CK_CHAR * mod,CK_ULONG_PTR mod_len,CK_CHAR * exp,CK_ULONG_PTR exp_len);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetPartPubKey)(CK_SESSION_HANDLE hSession,CK_SLOT_ID TargetSlotID,CK_CHAR * mod,CK_ULONG_PTR modSize,CK_CHAR * exp,CK_ULONG_PTR expSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetAdminPubKey)(CK_SLOT_ID slotId,CK_CHAR * mod,CK_ULONG_PTR modSize,CK_CHAR * exp,CK_ULONG_PTR expSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetCipherAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG CipherID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetCipherAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_BYTE_PTR pIDCount,CK_ULONG_PTR pIDs);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCClearCipherAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG CipherID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetDigestAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG DigestID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetDigestAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_BYTE_PTR pIDCount,CK_ULONG_PTR pIDs);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCClearDigestAlgorithm)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG DigestID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetKeyLifeTime)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG lifeTime);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetKeyLifeTime)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG_PTR plifeTime);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetKeyActivationTimeOut)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG timeOut);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetKeyActivationTimeOut)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG_PTR ptimeOut);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetMaxSessions)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG maxSessions);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetMaxSessions)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG_PTR pmaxSessions);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCSetSequenceWindowSize)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG windowSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetSequenceWindowSize)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG_PTR pwindowSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCIsEnabled)(CK_ULONG TargetSlotID,CK_BYTE_PTR pbenabled);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetState)(CK_ULONG TargetSlotID,CK_CHAR * str,CK_BYTE bbufferSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetCurrentKeyLife)(CK_SESSION_HANDLE hSession,CK_ULONG TargetSlotID,CK_ULONG_PTR pcurKeyLife);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSlotIdForPhysicalSlot)(CK_ULONG physicalSlot,CK_SLOT_ID_PTR pSlotId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSlotIdForContainer)(CK_ULONG slotID,CK_ULONG ulContainerNumber,CK_SLOT_ID_PTR pSlotID);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetChannelID)(CK_SLOT_ID slotId,CK_ULONG_PTR ulChannelId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetCipherID)(CK_SLOT_ID slotId,CK_ULONG_PTR ulCipherId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetDigestID)(CK_SLOT_ID slotId,CK_ULONG_PTR ulDigestId);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetCipherIDs)(CK_SLOT_ID slotID,CK_ULONG_PTR pulArray,CK_BYTE_PTR pbArraySize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetCipherNameByID)(CK_SLOT_ID slotID,CK_ULONG ulCipherID,CK_CHAR_PTR pszName,CK_BYTE bNameBufSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetDigestIDs)(CK_SLOT_ID slotID,CK_ULONG_PTR pulArray,CK_BYTE_PTR pbArraySize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_STCGetDigestNameByID)(CK_SLOT_ID slotID,CK_ULONG ulDigestID,CK_CHAR_PTR pszName,CK_BYTE bNameBufSize);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetServerInstanceBySlotID)(CK_SLOT_ID slotID,CK_ULONG_PTR pulInstanceNumber);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetSlotListFromServerInstance)(CK_ULONG instanceNumber,CK_SLOT_ID_PTR slotList,CK_ULONG_PTR pulCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ChangeLabel)(CK_SESSION_HANDLE hSession,CK_SLOT_ID ulSlotID,CK_CHAR_PTR pulLabel,CK_ULONG ulLabelLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_PerformSelfTest)(CK_SLOT_ID slotID,CK_ULONG typeOfTest,CK_BYTE_PTR inputData,CK_ULONG sizeOfInputData,CK_BYTE_PTR outputData,CK_ULONG_PTR sizeOfOutputData);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FMDownload)(CK_SESSION_HANDLE hTokenSession,CK_OBJECT_HANDLE hObject,CK_ULONG ulParamLen,CK_BYTE_PTR pParam,CK_ULONG ulImageLen,CK_BYTE_PTR pImage,CK_ULONG ulSignatureLen,CK_BYTE_PTR pSignature);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FMDelete)(CK_SESSION_HANDLE hTokenSession,CK_ULONG fmid);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_FMActivateSMFS)(CK_SESSION_HANDLE hTokenSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetActualSlotList)(CK_SLOT_ID slotId,CK_ULONG_PTR phsmidx,CK_SLOT_ID_PTR pActualslotID,CK_ULONG_PTR pulCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DeriveKeyAndWrap)(CK_SESSION_HANDLE hSession,CK_MECHANISM_PTR pMechanismDerive,CK_OBJECT_HANDLE hBaseKey,CK_ATTRIBUTE_PTR pTemplate,CK_ULONG ulAttributeCount,CK_MECHANISM_PTR pMechanismWrap,CK_OBJECT_HANDLE hWrappingKey,CK_BYTE_PTR pWrappedKey,CK_ULONG_PTR pulWrappedKeyLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_MdPriv_Initialize)(void * pMdPrivIf,unsigned int len,void * pLogIf);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Get)(CK_SLOT_ID slotID,CK_ULONG ulItem,CK_BYTE_PTR pBuffer,CK_ULONG_PTR pulBufferLen);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_Put)(CK_SLOT_ID slotID,CK_SESSION_HANDLE hSession,CK_ULONG ulParamId,CK_ULONG ulParamSize,CK_BYTE_PTR pParamBuffer);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetDefaultPartitionPolicyValue)(CK_SLOT_ID slotID,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_GetDefaultHSMPolicyValue)(CK_SLOT_ID slotID,CK_ULONG ulPolicyId,CK_ULONG_PTR pulPolicyValue);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ValidateHSMPolicySet)(CK_SLOT_ID slotId,CK_POLICY_INFO_PTR policyInfo,CK_ULONG policyCount,CK_RV_PTR policyResults);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ValidateContainerPolicySet)(CK_SLOT_ID slotId,CK_ULONG ulContainerNumber,CK_POLICY_INFO_PTR policyInfo,CK_ULONG policyCount,CK_RV_PTR policyResults);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ZeroizeContainer)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_InitToken)(CK_SLOT_ID slotID,CK_CHAR_PTR pPin,CK_ULONG usPinLen,CK_CHAR_PTR pLabel,CK_BYTE_PTR pDomain,CK_ULONG ulDomainLen,CK_ULONG ulPolicyCount,CK_POLICY_INFO_PTR pPolicyData,CK_ULONG ulHSMPolicyCount,CK_POLICY_INFO_PTR pHSMPolicyData);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReadUtilizationMetrics)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReadAndResetUtilizationMetrics)(CK_SESSION_HANDLE hSession);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReadAllUtilizationCounters)(CK_SESSION_HANDLE hSession,CK_UTILIZATION_COUNTER_PTR buff,CK_ULONG_PTR length);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_ReadUtilizationCount)(CK_SESSION_HANDLE hSession,CK_ULONGLONG serialNum,CK_ULONG ulBinId,CK_ULONG ulCounterId,CK_UTILIZATION_COUNT_PTR pCount);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DescribeUtilizationBinId)(CK_ULONG ulBinId,CK_CHAR_PTR CK_PTR describe);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_DescribeUtilizationCounterId)(CK_ULONG ulCounterId,CK_CHAR_PTR CK_PTR describe);
typedef CK_RV CK_ENTRY (CK_PTR CK_CA_TestTrace)(CK_SLOT_ID slotID,CK_ULONG ulTypeOfTrace,CK_BYTE_PTR pInData,CK_ULONG ulInDataLength,CK_BYTE_PTR pOutData,CK_ULONG_PTR pulOutDataLength);
