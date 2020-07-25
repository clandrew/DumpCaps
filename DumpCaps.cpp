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
    std::cout << "\t" << "DoublePrecisionFloatShaderOps: " << ToStringBool(cap.DoublePrecisionFloatShaderOps) << "\n";
    std::cout << "\t" << "OutputMergerLogicOp: " << ToStringBool(cap.OutputMergerLogicOp) << "\n";
    std::cout << "\t" << "MinPrecisionSupport: " << ToString(cap.MinPrecisionSupport) << "\n";
    std::cout << "\t" << "TiledResourcesTier: " << ToString(cap.TiledResourcesTier) << "\n";
    std::cout << "\t" << "ResourceBindingTier: " << ToString(cap.ResourceBindingTier) << "\n";
    std::cout << "\t" << "PSSpecifiedStencilRefSupported: " << ToStringBool(cap.PSSpecifiedStencilRefSupported) << "\n";
    std::cout << "\t" << "TypedUAVLoadAdditionalFormats: " << ToStringBool(cap.TypedUAVLoadAdditionalFormats) << "\n";
    std::cout << "\t" << "ROVsSupported: " << ToStringBool(cap.ROVsSupported) << "\n";
    std::cout << "\t" << "ConservativeRasterizationTier: " << ToString(cap.ConservativeRasterizationTier) << "\n";
    std::cout << "\t" << "MaxGPUVirtualAddressBitsPerResource: " << cap.MaxGPUVirtualAddressBitsPerResource << "\n";
    std::cout << "\t" << "StandardSwizzle64KBSupported: " << ToStringBool(cap.StandardSwizzle64KBSupported) << "\n";
    std::cout << "\t" << "CrossNodeSharingTier: " << ToString(cap.CrossNodeSharingTier) << "\n";
    std::cout << "\t" << "CrossAdapterRowMajorTextureSupported: " << ToStringBool(cap.CrossAdapterRowMajorTextureSupported) << "\n";
    std::cout << "\t" << "VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation: " << ToStringBool(cap.VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation) << "\n";
    std::cout << "\t" << "ResourceHeapTier: " << ToString(cap.ResourceHeapTier) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS1(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS1 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS1, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS1: \n";
    std::cout << "\t" << "WaveOps: " << ToStringBool(cap.WaveOps) << "\n";
    std::cout << "\t" << "WaveLaneCountMin: " << ToStringUint(cap.WaveLaneCountMin) << "\n";
    std::cout << "\t" << "WaveLaneCountMax: " << ToStringUint(cap.WaveLaneCountMax) << "\n";
    std::cout << "\t" << "TotalLaneCount: " << ToStringUint(cap.TotalLaneCount) << "\n";
    std::cout << "\t" << "ExpandedComputeResourceStates: " << ToStringBool(cap.ExpandedComputeResourceStates) << "\n";
    std::cout << "\t" << "Int64ShaderOps: " << ToStringBool(cap.Int64ShaderOps) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS2(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS2 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS2, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS2: \n";
    std::cout << "\t" << "DepthBoundsTestSupported: " << ToStringBool(cap.DepthBoundsTestSupported) << "\n";
    std::cout << "\t" << "ProgrammableSamplePositionsTier: " << ToString(cap.ProgrammableSamplePositionsTier) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS3(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS3 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS3, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS3: \n";
    std::cout << "\t" << "CopyQueueTimestampQueriesSupported: " << ToStringBool(cap.CopyQueueTimestampQueriesSupported) << "\n";
    std::cout << "\t" << "CastingFullyTypedFormatSupported: " << ToStringBool(cap.CastingFullyTypedFormatSupported) << "\n";
    std::cout << "\t" << "WriteBufferImmediateSupportFlags: " << ToString(cap.WriteBufferImmediateSupportFlags) << "\n";
    std::cout << "\t" << "ViewInstancingTier: " << ToString(cap.ViewInstancingTier) << "\n";
    std::cout << "\t" << "BarycentricsSupported: " << ToStringBool(cap.BarycentricsSupported) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS4(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS4 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS4, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS4: \n";
    std::cout << "\t" << "MSAA64KBAlignedTextureSupported: " << ToStringBool(cap.MSAA64KBAlignedTextureSupported) << "\n";
    std::cout << "\t" << "SharedResourceCompatibilityTier: " << ToString(cap.SharedResourceCompatibilityTier) << "\n";
    std::cout << "\t" << "Native16BitShaderOpsSupported: " << ToStringBool(cap.Native16BitShaderOpsSupported) << "\n";
    std::cout << "\n";
}

void PrintPage_OPTIONS5(ID3D12Device* device)
{
    D3D12_FEATURE_DATA_D3D12_OPTIONS5 cap{};
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS5, &cap, sizeof(cap))))
        return;

    std::cout << "D3D12_OPTIONS5: \n";
    std::cout << "\t" << "SRVOnlyTiledResourceTier3: " << ToStringBool(cap.SRVOnlyTiledResourceTier3) << "\n";
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
    std::cout << "\t" << "AdditionalShadingRatesSupported: " << ToStringBool(cap.AdditionalShadingRatesSupported) << "\n";
    std::cout << "\t" << "PerPrimitiveShadingRateSupportedWithViewportIndexing: " << ToStringBool(cap.PerPrimitiveShadingRateSupportedWithViewportIndexing) << "\n";
    std::cout << "\t" << "VariableShadingRateTier: " << ToString(cap.VariableShadingRateTier) << "\n";
    std::cout << "\t" << "ShadingRateImageTileSize: " << ToStringUint(cap.ShadingRateImageTileSize) << "\n";
    std::cout << "\t" << "BackgroundProcessingSupported: " << ToStringBool(cap.BackgroundProcessingSupported) << "\n";
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

void PrintPage_ARCHITECTURE(ID3D12Device* device)
{
    UINT nodeCount = device->GetNodeCount();
    bool outputHeader = true;
    for (UINT i = 0; i < nodeCount; ++i)
    {
        D3D12_FEATURE_DATA_ARCHITECTURE cap{};
        cap.NodeIndex = i;
        if (SUCCEEDED(device->CheckFeatureSupport(D3D12_FEATURE_ARCHITECTURE, &cap, sizeof(cap))))
        {
            if (outputHeader)
            {
                std::cout << "ARCHITECTURE: \n";
                outputHeader = false;
            }
            std::cout << "\t" << "Node " << cap.NodeIndex << ": \n";
            std::cout << "\t\t" << "TileBasedRenderer: " << ToStringBool(cap.TileBasedRenderer) << "\n";
            std::cout << "\t\t" << "UMA: " << ToStringBool(cap.UMA) << "\n";
            std::cout << "\t\t" << "CacheCoherentUMA: " << ToStringBool(cap.CacheCoherentUMA) << "\n";
            std::cout << "\n";
        }
        else
        {
            break;
        }
    }
}

void PrintPage_FEATURE_LEVELS(ID3D12Device* device)
{
    D3D_FEATURE_LEVEL featureLevels[] = {
        D3D_FEATURE_LEVEL_1_0_CORE,
        D3D_FEATURE_LEVEL_9_1,
        D3D_FEATURE_LEVEL_9_2,
        D3D_FEATURE_LEVEL_9_3,
        D3D_FEATURE_LEVEL_10_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_12_0,
        D3D_FEATURE_LEVEL_12_1
    };

    bool outputHeader = true;
    for (int i = 0; i < _countof(featureLevels); ++i)
    {
        D3D12_FEATURE_DATA_FEATURE_LEVELS cap{};
        cap.NumFeatureLevels = 1;
        D3D_FEATURE_LEVEL requested = featureLevels[i];
        cap.pFeatureLevelsRequested = &requested;
        if (SUCCEEDED(device->CheckFeatureSupport(D3D12_FEATURE_FEATURE_LEVELS, &cap, sizeof(cap))) && cap.MaxSupportedFeatureLevel == requested)
        {
            if (outputHeader)
            {
                std::cout << "FEATURE_LEVELS: \n\t";
                outputHeader = false;
            }
            std::cout << ToString(requested) << " ";
        }

    }
    std::cout << "\n\n";
}

void PrintUsage()
{
    std::cout << "Usage: DumpCaps [adapterIndex]\n";
    std::cout << "where adapterIndex is an optional number. If no adapter is specified, adapter 0 is used.\n";
}

int main(int argc, void** argv)
{
    if (argc > 2)
    {
        PrintUsage();
        return -1;
    }

    UINT adapterIndex = 0;
    if (argc == 2)
    {
        char* adapterIndexStorage = reinterpret_cast<char*>(argv[1]);

        std::istringstream strm(adapterIndexStorage);

        if (!(strm >> adapterIndex))
        {
            std::cout << "An invalid adapterIndex was specified.\n";
            PrintUsage();
            return -1;
        }
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

    PrintPage_FEATURE_LEVELS(device.Get());

    PrintPage_ARCHITECTURE(device.Get());

    return 0;
}
