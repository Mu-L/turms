<template>
    <check-circle-two-tone
        v-if="type === 'check-circle'"
        two-tone-color="#52c41a"
    />
    <close-circle-two-tone
        v-else-if="type === 'close-circle'"
        two-tone-color="#ff4d4f"
    />
    <component
        :is="type + '-outlined'"
        v-else
    />
</template>

<script>
import {
    AreaChartOutlined,
    BarChartOutlined,
    BarsOutlined,
    CheckCircleTwoTone,
    CheckOutlined,
    ClearOutlined,
    CloseCircleTwoTone,
    CloseOutlined,
    ClusterOutlined,
    CodeOutlined,
    DashboardOutlined,
    DatabaseOutlined,
    DownOutlined,
    ExportOutlined,
    InfoCircleOutlined,
    LinkOutlined,
    LockOutlined,
    LogoutOutlined,
    MessageOutlined,
    ProfileOutlined,
    QuestionCircleOutlined,
    RollbackOutlined,
    SafetyOutlined,
    SettingOutlined,
    StopOutlined,
    SyncOutlined,
    TeamOutlined,
    UserOutlined
} from '@ant-design/icons-vue';

export default {
    name: 'icon',
    components: {
        AreaChartOutlined,
        BarChartOutlined,
        BarsOutlined,
        CheckCircleTwoTone,
        CheckOutlined,
        ClearOutlined,
        CloseCircleTwoTone,
        CloseOutlined,
        ClusterOutlined,
        CodeOutlined,
        DashboardOutlined,
        DatabaseOutlined,
        DownOutlined,
        ExportOutlined,
        InfoCircleOutlined,
        LinkOutlined,
        LockOutlined,
        LogoutOutlined,
        MessageOutlined,
        ProfileOutlined,
        QuestionCircleOutlined,
        RollbackOutlined,
        SafetyOutlined,
        SettingOutlined,
        StopOutlined,
        SyncOutlined,
        TeamOutlined,
        UserOutlined
    },
    props: {
        type: {
            type: String,
            required: true
        }
    }
};
</script>