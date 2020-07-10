// DumpCaps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ToString.h"

using namespace Microsoft::WRL;

void PrintPage_OPTIONS(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS: \n";
    std::cout << "\t" << "DoublePrecisionFloatShaderOps: " << ToString(cap.DoublePrecisionFloatShaderOps) << "\n";
    std::cout << "\t" << "OutputMergerLogicOp: " << ToString(cap.OutputMergerLogicOp) << "\n";
    std::cout << "\t" << "MinPrecisionSupport: " << ToString(cap.MinPrecisionSupport) << "\n";
    std::cout << "\t" << "TiledResourcesTier: " << ToString(cap.TiledResourcesTier) << "\n";
    std::cout << "\t" << "ResourceBindingTier: " << ToString(cap.ResourceBindingTier) << "\n";
    std::cout << "\t" << "PSSpecifiedStencilRefSupported: " << ToString(cap.PSSpecifiedStencilRefSupported) << "\n";
    std::cout << "\t" << "TypedUAVLoadAdditionalFormats: " << ToString(cap.TypedUAVLoadAdditionalFormats) << "\n";
    std::cout << "\t" << "ROVsSupported: " << ToString(cap.ROVsSupported) << "\n";
    std::cout << "\t" << "ConservativeRasterizationTier: " << ToString(cap.ConservativeRasterizationTier) << "\n";
    std::cout << "\t" << "MaxGPUVirtualAddressBitsPerResource: " << cap.MaxGPUVirtualAddressBitsPerResource << "\n";
    std::cout << "\t" << "StandardSwizzle64KBSupported: " << ToString(cap.StandardSwizzle64KBSupported) << "\n";
    std::cout << "\t" << "CrossNodeSharingTier: " << ToString(cap.CrossNodeSharingTier) << "\n";
    std::cout << "\t" << "CrossAdapterRowMajorTextureSupported: " << ToString(cap.CrossAdapterRowMajorTextureSupported) << "\n";
    std::cout << "\t" << "VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation: " << ToString(cap.VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation) << "\n";
    std::cout << "\t" << "ResourceHeapTier: " << ToString(cap.ResourceHeapTier) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS1(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS1 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS1, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS1: \n";
    std::cout << "\t" << "WaveOps: " << ToString(cap.WaveOps) << "\n";
    std::cout << "\t" << "WaveLaneCountMin: " << ToString(cap.WaveLaneCountMin) << "\n";
    std::cout << "\t" << "WaveLaneCountMax: " << ToString(cap.WaveLaneCountMax) << "\n";
    std::cout << "\t" << "TotalLaneCount: " << ToString(cap.TotalLaneCount) << "\n";
    std::cout << "\t" << "ExpandedComputeResourceStates: " << ToString(cap.ExpandedComputeResourceStates) << "\n";
    std::cout << "\t" << "Int64ShaderOps: " << ToString(cap.Int64ShaderOps) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS2(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS2 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS2, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS2: \n";
    std::cout << "\t" << "DepthBoundsTestSupported: " << ToString(cap.DepthBoundsTestSupported) << "\n";
    std::cout << "\t" << "ProgrammableSamplePositionsTier: " << ToString(cap.ProgrammableSamplePositionsTier) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS3(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS3 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS3, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS3: \n";
    std::cout << "\t" << "CopyQueueTimestampQueriesSupported: " << ToString(cap.CopyQueueTimestampQueriesSupported) << "\n";
    std::cout << "\t" << "CastingFullyTypedFormatSupported: " << ToString(cap.CastingFullyTypedFormatSupported) << "\n";
    std::cout << "\t" << "WriteBufferImmediateSupportFlags: " << ToString(cap.WriteBufferImmediateSupportFlags) << "\n";
    std::cout << "\t" << "ViewInstancingTier: " << ToString(cap.ViewInstancingTier) << "\n";
    std::cout << "\t" << "BarycentricsSupported: " << ToString(cap.BarycentricsSupported) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS4(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS4 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS4, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS4: \n";
    std::cout << "\t" << "MSAA64KBAlignedTextureSupported: " << ToString(cap.MSAA64KBAlignedTextureSupported) << "\n";
    std::cout << "\t" << "SharedResourceCompatibilityTier: " << ToString(cap.SharedResourceCompatibilityTier) << "\n";
    std::cout << "\t" << "Native16BitShaderOpsSupported: " << ToString(cap.Native16BitShaderOpsSupported) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS5(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS5 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS5, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS5: \n";
    std::cout << "\t" << "SRVOnlyTiledResourceTier3: " << ToString(cap.SRVOnlyTiledResourceTier3) << "\n";
    std::cout << "\t" << "RenderPassesTier: " << ToString(cap.RenderPassesTier) << "\n";
    std::cout << "\t" << "RaytracingTier: " << ToString(cap.RaytracingTier) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS6(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS6 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS6, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS6: \n";
    std::cout << "\t" << "AdditionalShadingRatesSupported: " << ToString(cap.AdditionalShadingRatesSupported) << "\n";
    std::cout << "\t" << "PerPrimitiveShadingRateSupportedWithViewportIndexing: " << ToString(cap.PerPrimitiveShadingRateSupportedWithViewportIndexing) << "\n";
    std::cout << "\t" << "VariableShadingRateTier: " << ToString(cap.VariableShadingRateTier) << "\n";
    std::cout << "\t" << "ShadingRateImageTileSize: " << ToString(cap.ShadingRateImageTileSize) << "\n";
    std::cout << "\t" << "BackgroundProcessingSupported: " << ToString(cap.BackgroundProcessingSupported) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS7(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS7 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS7, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS7: \n";
    std::cout << "\t" << "MeshShaderTier: " << ToString(cap.MeshShaderTier) << "\n";
    std::cout << "\t" << "SamplerFeedbackTier: " << ToString(cap.SamplerFeedbackTier) << "\n";
    std::cout << "\n";
}

int main(int argc, void** argv)
{
    if (argc > 2)
    {
        std::cout << "Usage: DumpCaps [adapterIndex]\n";
        std::cout << "If no adapter is specified, adapter 0 is used.\n";
        return -1;
    }

    UINT adapterIndex = 0;
    if (argc == 2)
    {
        char* adapterIndexStorage = reinterpret_cast<char*>(argv[1]);
        std::istringstream strm(adapterIndexStorage);
        strm >> adapterIndex;
    }

    HRESULT hr;

    ComPtr<IDXGIFactory1> dxgiFactory;
    hr = CreateDXGIFactory1(IID_PPV_ARGS(&dxgiFactory));
    if (FAILED(hr))
    {
        std::cout << "Failed to create a DXGI factory, error code 0x" << std::hex << hr << ".\n";
        return -1;
    }

    ComPtr<IDXGIAdapter1> adapter;
    hr = dxgiFactory->EnumAdapters1(adapterIndex, &adapter);
    if (FAILED(hr))
    {
        std::cout << "Couldn't enumerate an adapter at index " << adapterIndex << ", error code 0x" << std::hex << hr << ".\n";
        return -1;
    }

    DXGI_ADAPTER_DESC1 desc;
    hr = adapter->GetDesc1(&desc);
    if (FAILED(hr))
    {
        std::cout << "Couldn't GetDesc the adapter at index " << adapterIndex << ", error code 0x" << std::hex << hr << ".\n";
        return -1;
    }

    std::wcout << L"Adapter " << adapterIndex << L": " << desc.Description << L" ";

    if (desc.Flags & DXGI_ADAPTER_FLAG_SOFTWARE)
    {
        std::cout << "(Software)\n\n";
    }
    else
    {
        std::cout << "(Hardware)\n\n";
    }

    ComPtr<ID3D12Device> device;
    hr = D3D12CreateDevice(adapter.Get(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&device));
    if (FAILED(hr))
    {
        std::cout << "Couldn't create a Direct3D 12 device; error code 0x" << std::hex << hr << ".\n";
        return -1;
    }

    PrintPage_OPTIONS(device.Get());

    PrintPage_OPTIONS1(device.Get());

    PrintPage_OPTIONS2(device.Get());

    PrintPage_OPTIONS3(device.Get());

    PrintPage_OPTIONS4(device.Get());

    PrintPage_OPTIONS5(device.Get());

    PrintPage_OPTIONS6(device.Get());

    PrintPage_OPTIONS7(device.Get());

    return 0;
}
