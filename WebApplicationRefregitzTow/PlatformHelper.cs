
namespace System.Threading
{
    
    using System;
    using System.Runtime.CompilerServices;
    //[field: NonSerialized]
    internal static class PlatformHelper
    {
        
        private const int PROCESSOR_COUNT_REFRESH_INTERVAL_MS = 0x7530;
        private static volatile int s_LastProcessorCountRefreshTicks;
        private static volatile int s_processorCount;

        internal static bool IsSingleProcessor
        {
            get
            {
                return (ProcessorCount == 1);
            }
        }

        internal static int ProcessorCount
        {
            get
            {
                int tickCount = Environment.TickCount;
                int num2 = s_processorCount;
                if ((num2 == 0) || ((tickCount - s_LastProcessorCountRefreshTicks) >= 0x7530))
                {
                    s_processorCount = num2 = Environment.ProcessorCount;
                    s_LastProcessorCountRefreshTicks = tickCount;
                }
                return num2;
            }
        }
    }
}