
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_lamp.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_Lamp_type;
FloatPropertyRNA rna_Lamp_distance;
FloatPropertyRNA rna_Lamp_energy;
FloatPropertyRNA rna_Lamp_color;
BoolPropertyRNA rna_Lamp_use_own_layer;
BoolPropertyRNA rna_Lamp_use_negative;
BoolPropertyRNA rna_Lamp_use_specular;
BoolPropertyRNA rna_Lamp_use_diffuse;
PointerPropertyRNA rna_Lamp_node_tree;
BoolPropertyRNA rna_Lamp_use_nodes;
PointerPropertyRNA rna_Lamp_animation_data;
CollectionPropertyRNA rna_Lamp_texture_slots;
PointerPropertyRNA rna_Lamp_active_texture;
IntPropertyRNA rna_Lamp_active_texture_index;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_LampTextureSlots_rna_properties;
PointerPropertyRNA rna_LampTextureSlots_rna_type;

extern FunctionRNA rna_LampTextureSlots_add_func;
extern PointerPropertyRNA rna_LampTextureSlots_add_mtex;

extern FunctionRNA rna_LampTextureSlots_create_func;
extern IntPropertyRNA rna_LampTextureSlots_create_index;
extern PointerPropertyRNA rna_LampTextureSlots_create_mtex;

extern FunctionRNA rna_LampTextureSlots_clear_func;
extern IntPropertyRNA rna_LampTextureSlots_clear_index;



extern EnumPropertyRNA rna_Lamp_type;
extern FloatPropertyRNA rna_Lamp_distance;
extern FloatPropertyRNA rna_Lamp_energy;
extern FloatPropertyRNA rna_Lamp_color;
extern BoolPropertyRNA rna_Lamp_use_own_layer;
extern BoolPropertyRNA rna_Lamp_use_negative;
extern BoolPropertyRNA rna_Lamp_use_specular;
extern BoolPropertyRNA rna_Lamp_use_diffuse;
extern PointerPropertyRNA rna_Lamp_node_tree;
extern BoolPropertyRNA rna_Lamp_use_nodes;
extern PointerPropertyRNA rna_Lamp_animation_data;
extern CollectionPropertyRNA rna_Lamp_texture_slots;
extern PointerPropertyRNA rna_Lamp_active_texture;
extern IntPropertyRNA rna_Lamp_active_texture_index;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_PointLamp_falloff_type;
PointerPropertyRNA rna_PointLamp_falloff_curve;
BoolPropertyRNA rna_PointLamp_use_sphere;
FloatPropertyRNA rna_PointLamp_linear_attenuation;
FloatPropertyRNA rna_PointLamp_quadratic_attenuation;
BoolPropertyRNA rna_PointLamp_use_shadow;
EnumPropertyRNA rna_PointLamp_shadow_method;
IntPropertyRNA rna_PointLamp_shadow_buffer_size;
EnumPropertyRNA rna_PointLamp_shadow_filter_type;
EnumPropertyRNA rna_PointLamp_shadow_sample_buffers;
FloatPropertyRNA rna_PointLamp_shadow_buffer_clip_start;
FloatPropertyRNA rna_PointLamp_shadow_buffer_clip_end;
FloatPropertyRNA rna_PointLamp_shadow_buffer_bias;
FloatPropertyRNA rna_PointLamp_shadow_buffer_bleed_bias;
FloatPropertyRNA rna_PointLamp_shadow_buffer_soft;
IntPropertyRNA rna_PointLamp_shadow_buffer_samples;
EnumPropertyRNA rna_PointLamp_shadow_buffer_type;
EnumPropertyRNA rna_PointLamp_ge_shadow_buffer_type;
BoolPropertyRNA rna_PointLamp_use_auto_clip_start;
BoolPropertyRNA rna_PointLamp_use_auto_clip_end;
FloatPropertyRNA rna_PointLamp_compression_threshold;
FloatPropertyRNA rna_PointLamp_shadow_color;
BoolPropertyRNA rna_PointLamp_use_only_shadow;
EnumPropertyRNA rna_PointLamp_shadow_ray_sample_method;
IntPropertyRNA rna_PointLamp_shadow_ray_samples;
FloatPropertyRNA rna_PointLamp_shadow_adaptive_threshold;
FloatPropertyRNA rna_PointLamp_shadow_soft_size;
BoolPropertyRNA rna_PointLamp_use_shadow_layer;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Lamp_type;
extern FloatPropertyRNA rna_Lamp_distance;
extern FloatPropertyRNA rna_Lamp_energy;
extern FloatPropertyRNA rna_Lamp_color;
extern BoolPropertyRNA rna_Lamp_use_own_layer;
extern BoolPropertyRNA rna_Lamp_use_negative;
extern BoolPropertyRNA rna_Lamp_use_specular;
extern BoolPropertyRNA rna_Lamp_use_diffuse;
extern PointerPropertyRNA rna_Lamp_node_tree;
extern BoolPropertyRNA rna_Lamp_use_nodes;
extern PointerPropertyRNA rna_Lamp_animation_data;
extern CollectionPropertyRNA rna_Lamp_texture_slots;
extern PointerPropertyRNA rna_Lamp_active_texture;
extern IntPropertyRNA rna_Lamp_active_texture_index;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

BoolPropertyRNA rna_AreaLamp_use_shadow;
EnumPropertyRNA rna_AreaLamp_shadow_method;
IntPropertyRNA rna_AreaLamp_shadow_buffer_size;
EnumPropertyRNA rna_AreaLamp_shadow_filter_type;
EnumPropertyRNA rna_AreaLamp_shadow_sample_buffers;
FloatPropertyRNA rna_AreaLamp_shadow_buffer_clip_start;
FloatPropertyRNA rna_AreaLamp_shadow_buffer_clip_end;
FloatPropertyRNA rna_AreaLamp_shadow_buffer_bias;
FloatPropertyRNA rna_AreaLamp_shadow_buffer_bleed_bias;
FloatPropertyRNA rna_AreaLamp_shadow_buffer_soft;
IntPropertyRNA rna_AreaLamp_shadow_buffer_samples;
EnumPropertyRNA rna_AreaLamp_shadow_buffer_type;
EnumPropertyRNA rna_AreaLamp_ge_shadow_buffer_type;
BoolPropertyRNA rna_AreaLamp_use_auto_clip_start;
BoolPropertyRNA rna_AreaLamp_use_auto_clip_end;
FloatPropertyRNA rna_AreaLamp_compression_threshold;
FloatPropertyRNA rna_AreaLamp_shadow_color;
BoolPropertyRNA rna_AreaLamp_use_only_shadow;
EnumPropertyRNA rna_AreaLamp_shadow_ray_sample_method;
IntPropertyRNA rna_AreaLamp_shadow_ray_samples_x;
IntPropertyRNA rna_AreaLamp_shadow_ray_samples_y;
FloatPropertyRNA rna_AreaLamp_shadow_adaptive_threshold;
FloatPropertyRNA rna_AreaLamp_shadow_soft_size;
BoolPropertyRNA rna_AreaLamp_use_shadow_layer;
BoolPropertyRNA rna_AreaLamp_use_umbra;
BoolPropertyRNA rna_AreaLamp_use_dither;
BoolPropertyRNA rna_AreaLamp_use_jitter;
EnumPropertyRNA rna_AreaLamp_shape;
FloatPropertyRNA rna_AreaLamp_size;
FloatPropertyRNA rna_AreaLamp_size_y;
FloatPropertyRNA rna_AreaLamp_gamma;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Lamp_type;
extern FloatPropertyRNA rna_Lamp_distance;
extern FloatPropertyRNA rna_Lamp_energy;
extern FloatPropertyRNA rna_Lamp_color;
extern BoolPropertyRNA rna_Lamp_use_own_layer;
extern BoolPropertyRNA rna_Lamp_use_negative;
extern BoolPropertyRNA rna_Lamp_use_specular;
extern BoolPropertyRNA rna_Lamp_use_diffuse;
extern PointerPropertyRNA rna_Lamp_node_tree;
extern BoolPropertyRNA rna_Lamp_use_nodes;
extern PointerPropertyRNA rna_Lamp_animation_data;
extern CollectionPropertyRNA rna_Lamp_texture_slots;
extern PointerPropertyRNA rna_Lamp_active_texture;
extern IntPropertyRNA rna_Lamp_active_texture_index;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_SpotLamp_falloff_type;
PointerPropertyRNA rna_SpotLamp_falloff_curve;
BoolPropertyRNA rna_SpotLamp_use_sphere;
FloatPropertyRNA rna_SpotLamp_linear_attenuation;
FloatPropertyRNA rna_SpotLamp_quadratic_attenuation;
BoolPropertyRNA rna_SpotLamp_use_shadow;
EnumPropertyRNA rna_SpotLamp_shadow_method;
IntPropertyRNA rna_SpotLamp_shadow_buffer_size;
EnumPropertyRNA rna_SpotLamp_shadow_filter_type;
EnumPropertyRNA rna_SpotLamp_shadow_sample_buffers;
FloatPropertyRNA rna_SpotLamp_shadow_buffer_clip_start;
FloatPropertyRNA rna_SpotLamp_shadow_buffer_clip_end;
FloatPropertyRNA rna_SpotLamp_shadow_buffer_bias;
FloatPropertyRNA rna_SpotLamp_shadow_buffer_bleed_bias;
FloatPropertyRNA rna_SpotLamp_shadow_buffer_soft;
IntPropertyRNA rna_SpotLamp_shadow_buffer_samples;
EnumPropertyRNA rna_SpotLamp_shadow_buffer_type;
EnumPropertyRNA rna_SpotLamp_ge_shadow_buffer_type;
BoolPropertyRNA rna_SpotLamp_use_auto_clip_start;
BoolPropertyRNA rna_SpotLamp_use_auto_clip_end;
FloatPropertyRNA rna_SpotLamp_compression_threshold;
FloatPropertyRNA rna_SpotLamp_shadow_color;
BoolPropertyRNA rna_SpotLamp_use_only_shadow;
EnumPropertyRNA rna_SpotLamp_shadow_ray_sample_method;
IntPropertyRNA rna_SpotLamp_shadow_ray_samples;
FloatPropertyRNA rna_SpotLamp_shadow_adaptive_threshold;
FloatPropertyRNA rna_SpotLamp_shadow_soft_size;
BoolPropertyRNA rna_SpotLamp_use_shadow_layer;
BoolPropertyRNA rna_SpotLamp_use_square;
BoolPropertyRNA rna_SpotLamp_use_halo;
FloatPropertyRNA rna_SpotLamp_halo_intensity;
IntPropertyRNA rna_SpotLamp_halo_step;
FloatPropertyRNA rna_SpotLamp_spot_blend;
FloatPropertyRNA rna_SpotLamp_spot_size;
BoolPropertyRNA rna_SpotLamp_show_cone;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Lamp_type;
extern FloatPropertyRNA rna_Lamp_distance;
extern FloatPropertyRNA rna_Lamp_energy;
extern FloatPropertyRNA rna_Lamp_color;
extern BoolPropertyRNA rna_Lamp_use_own_layer;
extern BoolPropertyRNA rna_Lamp_use_negative;
extern BoolPropertyRNA rna_Lamp_use_specular;
extern BoolPropertyRNA rna_Lamp_use_diffuse;
extern PointerPropertyRNA rna_Lamp_node_tree;
extern BoolPropertyRNA rna_Lamp_use_nodes;
extern PointerPropertyRNA rna_Lamp_animation_data;
extern CollectionPropertyRNA rna_Lamp_texture_slots;
extern PointerPropertyRNA rna_Lamp_active_texture;
extern IntPropertyRNA rna_Lamp_active_texture_index;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

BoolPropertyRNA rna_SunLamp_use_shadow;
EnumPropertyRNA rna_SunLamp_shadow_method;
IntPropertyRNA rna_SunLamp_shadow_buffer_size;
EnumPropertyRNA rna_SunLamp_shadow_filter_type;
EnumPropertyRNA rna_SunLamp_shadow_sample_buffers;
FloatPropertyRNA rna_SunLamp_shadow_buffer_clip_start;
FloatPropertyRNA rna_SunLamp_shadow_buffer_clip_end;
FloatPropertyRNA rna_SunLamp_shadow_buffer_bias;
FloatPropertyRNA rna_SunLamp_shadow_buffer_bleed_bias;
FloatPropertyRNA rna_SunLamp_shadow_buffer_soft;
IntPropertyRNA rna_SunLamp_shadow_buffer_samples;
EnumPropertyRNA rna_SunLamp_shadow_buffer_type;
EnumPropertyRNA rna_SunLamp_ge_shadow_buffer_type;
BoolPropertyRNA rna_SunLamp_use_auto_clip_start;
BoolPropertyRNA rna_SunLamp_use_auto_clip_end;
FloatPropertyRNA rna_SunLamp_compression_threshold;
FloatPropertyRNA rna_SunLamp_shadow_color;
BoolPropertyRNA rna_SunLamp_use_only_shadow;
EnumPropertyRNA rna_SunLamp_shadow_ray_sample_method;
IntPropertyRNA rna_SunLamp_shadow_ray_samples;
FloatPropertyRNA rna_SunLamp_shadow_adaptive_threshold;
FloatPropertyRNA rna_SunLamp_shadow_soft_size;
BoolPropertyRNA rna_SunLamp_use_shadow_layer;
PointerPropertyRNA rna_SunLamp_sky;
FloatPropertyRNA rna_SunLamp_shadow_frustum_size;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_LampSkySettings_rna_properties;
PointerPropertyRNA rna_LampSkySettings_rna_type;
EnumPropertyRNA rna_LampSkySettings_sky_color_space;
EnumPropertyRNA rna_LampSkySettings_sky_blend_type;
FloatPropertyRNA rna_LampSkySettings_horizon_brightness;
FloatPropertyRNA rna_LampSkySettings_spread;
FloatPropertyRNA rna_LampSkySettings_sun_brightness;
FloatPropertyRNA rna_LampSkySettings_sun_size;
FloatPropertyRNA rna_LampSkySettings_backscattered_light;
FloatPropertyRNA rna_LampSkySettings_sun_intensity;
FloatPropertyRNA rna_LampSkySettings_atmosphere_turbidity;
FloatPropertyRNA rna_LampSkySettings_atmosphere_inscattering;
FloatPropertyRNA rna_LampSkySettings_atmosphere_extinction;
FloatPropertyRNA rna_LampSkySettings_atmosphere_distance_factor;
FloatPropertyRNA rna_LampSkySettings_sky_blend;
FloatPropertyRNA rna_LampSkySettings_sky_exposure;
BoolPropertyRNA rna_LampSkySettings_use_sky;
BoolPropertyRNA rna_LampSkySettings_use_atmosphere;


extern EnumPropertyRNA rna_Lamp_type;
extern FloatPropertyRNA rna_Lamp_distance;
extern FloatPropertyRNA rna_Lamp_energy;
extern FloatPropertyRNA rna_Lamp_color;
extern BoolPropertyRNA rna_Lamp_use_own_layer;
extern BoolPropertyRNA rna_Lamp_use_negative;
extern BoolPropertyRNA rna_Lamp_use_specular;
extern BoolPropertyRNA rna_Lamp_use_diffuse;
extern PointerPropertyRNA rna_Lamp_node_tree;
extern BoolPropertyRNA rna_Lamp_use_nodes;
extern PointerPropertyRNA rna_Lamp_animation_data;
extern CollectionPropertyRNA rna_Lamp_texture_slots;
extern PointerPropertyRNA rna_Lamp_active_texture;
extern IntPropertyRNA rna_Lamp_active_texture_index;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern PointerPropertyRNA rna_TextureSlot_texture;
extern StringPropertyRNA rna_TextureSlot_name;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern FloatPropertyRNA rna_TextureSlot_color;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern BoolPropertyRNA rna_TextureSlot_use_stencil;
extern BoolPropertyRNA rna_TextureSlot_invert;
extern BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern EnumPropertyRNA rna_TextureSlot_output_node;

EnumPropertyRNA rna_LampTextureSlot_texture_coords;
PointerPropertyRNA rna_LampTextureSlot_object;
BoolPropertyRNA rna_LampTextureSlot_use_map_color;
BoolPropertyRNA rna_LampTextureSlot_use_map_shadow;
FloatPropertyRNA rna_LampTextureSlot_color_factor;
FloatPropertyRNA rna_LampTextureSlot_shadow_factor;

int Lamp_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->type);
}

void Lamp_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->type = value;
}

float Lamp_distance_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->dist);
}

void Lamp_distance_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->dist = CLAMPIS(value, 0.0f, 2147483648.0000000000f);
}

float Lamp_energy_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->energy);
}

void Lamp_energy_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->energy = value;
}

void Lamp_color_get(PointerRNA *ptr, float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void Lamp_color_set(PointerRNA *ptr, const float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int Lamp_use_own_layer_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 4) != 0);
}

void Lamp_use_own_layer_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 4;
	else data->mode &= ~4;
}

int Lamp_use_negative_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void Lamp_use_negative_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

int Lamp_use_specular_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return !(((data->mode) & 4096) != 0);
}

void Lamp_use_specular_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (!value) data->mode |= 4096;
	else data->mode &= ~4096;
}

int Lamp_use_diffuse_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return !(((data->mode) & 2048) != 0);
}

void Lamp_use_diffuse_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (!value) data->mode |= 2048;
	else data->mode &= ~2048;
}

PointerRNA Lamp_node_tree_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int Lamp_use_nodes_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void Lamp_use_nodes_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

PointerRNA Lamp_animation_data_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Lamp_texture_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LampTextureSlot, rna_iterator_array_dereference_get(iter));
}

void Lamp_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Lamp_texture_slots;

	rna_Lamp_mtex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Lamp_texture_slots_get(iter);
}

void Lamp_texture_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Lamp_texture_slots_get(iter);
}

void Lamp_texture_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA Lamp_active_texture_get(PointerRNA *ptr)
{
	return rna_Lamp_active_texture_get(ptr);
}

void Lamp_active_texture_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Lamp_active_texture_set(ptr, value);
}

int Lamp_active_texture_index_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->texact);
}

void Lamp_active_texture_index_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->texact = CLAMPIS(value, 0, 17);
}

static PointerRNA LampTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LampTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LampTextureSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LampTextureSlots_rna_properties_get(iter);
}

void LampTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LampTextureSlots_rna_properties_get(iter);
}

void LampTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LampTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LampTextureSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int PointLamp_falloff_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->falloff_type);
}

void PointLamp_falloff_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->falloff_type = value;
}

PointerRNA PointLamp_falloff_curve_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

int PointLamp_use_sphere_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void PointLamp_use_sphere_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 64;
	else data->mode &= ~64;
}

float PointLamp_linear_attenuation_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->att1);
}

void PointLamp_linear_attenuation_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->att1 = CLAMPIS(value, 0.0f, 1.0f);
}

float PointLamp_quadratic_attenuation_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->att2);
}

void PointLamp_quadratic_attenuation_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->att2 = CLAMPIS(value, 0.0f, 1.0f);
}

int PointLamp_use_shadow_get(PointerRNA *ptr)
{
	return rna_use_shadow_get(ptr);
}

void PointLamp_use_shadow_set(PointerRNA *ptr, int value)
{
	rna_use_shadow_set(ptr, value);
}

int PointLamp_shadow_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return ((data->mode) & 8192);
}

void PointLamp_shadow_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->mode &= ~8192;
	data->mode |= value;
}

int PointLamp_shadow_buffer_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->bufsize);
}

void PointLamp_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
	rna_Lamp_buffer_size_set(ptr, value);
}

int PointLamp_shadow_filter_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->filtertype);
}

void PointLamp_shadow_filter_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->filtertype = value;
}

int PointLamp_shadow_sample_buffers_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buffers);
}

void PointLamp_shadow_sample_buffers_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buffers = value;
}

float PointLamp_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipsta);
}

void PointLamp_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipsta = CLAMPIS(value, 0.0f, 9999.0f);
}

float PointLamp_shadow_buffer_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipend);
}

void PointLamp_shadow_buffer_clip_end_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipend = CLAMPIS(value, 0.0f, 9999.0f);
}

float PointLamp_shadow_buffer_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bias);
}

void PointLamp_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bias = CLAMPIS(value, 0.0010000000f, 5.0f);
}

float PointLamp_shadow_buffer_bleed_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bleedbias);
}

void PointLamp_shadow_buffer_bleed_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bleedbias = CLAMPIS(value, 0.0f, 1.0f);
}

float PointLamp_shadow_buffer_soft_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->soft);
}

void PointLamp_shadow_buffer_soft_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->soft = CLAMPIS(value, 0.0f, 100.0f);
}

int PointLamp_shadow_buffer_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->samp);
}

void PointLamp_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->samp = CLAMPIS(value, 1, 16);
}

int PointLamp_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buftype);
}

void PointLamp_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buftype = value;
}

int PointLamp_ge_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->shadowmap_type);
}

void PointLamp_ge_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadowmap_type = value;
}

int PointLamp_use_auto_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 1) != 0);
}

void PointLamp_use_auto_clip_start_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 1;
	else data->bufflag &= ~1;
}

int PointLamp_use_auto_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 2) != 0);
}

void PointLamp_use_auto_clip_end_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 2;
	else data->bufflag &= ~2;
}

float PointLamp_compression_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->compressthresh);
}

void PointLamp_compression_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->compressthresh = CLAMPIS(value, 0.0f, 1.0f);
}

void PointLamp_shadow_color_get(PointerRNA *ptr, float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->shdwr)[i]);
	}
}

void PointLamp_shadow_color_set(PointerRNA *ptr, const float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int PointLamp_use_only_shadow_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void PointLamp_use_only_shadow_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int PointLamp_shadow_ray_sample_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp_method);
}

void PointLamp_shadow_ray_sample_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp_method = value;
}

int PointLamp_shadow_ray_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp);
}

void PointLamp_shadow_ray_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp = CLAMPIS(value, 1, 64);
}

float PointLamp_shadow_adaptive_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->adapt_thresh);
}

void PointLamp_shadow_adaptive_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->adapt_thresh = CLAMPIS(value, 0.0f, 1.0f);
}

float PointLamp_shadow_soft_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_size);
}

void PointLamp_shadow_soft_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int PointLamp_use_shadow_layer_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32768) != 0);
}

void PointLamp_use_shadow_layer_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32768;
	else data->mode &= ~32768;
}

int AreaLamp_use_shadow_get(PointerRNA *ptr)
{
	return rna_use_shadow_get(ptr);
}

void AreaLamp_use_shadow_set(PointerRNA *ptr, int value)
{
	rna_use_shadow_set(ptr, value);
}

int AreaLamp_shadow_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return ((data->mode) & 8192);
}

void AreaLamp_shadow_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->mode &= ~8192;
	data->mode |= value;
}

int AreaLamp_shadow_buffer_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->bufsize);
}

void AreaLamp_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
	rna_Lamp_buffer_size_set(ptr, value);
}

int AreaLamp_shadow_filter_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->filtertype);
}

void AreaLamp_shadow_filter_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->filtertype = value;
}

int AreaLamp_shadow_sample_buffers_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buffers);
}

void AreaLamp_shadow_sample_buffers_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buffers = value;
}

float AreaLamp_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipsta);
}

void AreaLamp_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipsta = CLAMPIS(value, 0.0f, 9999.0f);
}

float AreaLamp_shadow_buffer_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipend);
}

void AreaLamp_shadow_buffer_clip_end_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipend = CLAMPIS(value, 0.0f, 9999.0f);
}

float AreaLamp_shadow_buffer_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bias);
}

void AreaLamp_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bias = CLAMPIS(value, 0.0010000000f, 5.0f);
}

float AreaLamp_shadow_buffer_bleed_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bleedbias);
}

void AreaLamp_shadow_buffer_bleed_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bleedbias = CLAMPIS(value, 0.0f, 1.0f);
}

float AreaLamp_shadow_buffer_soft_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->soft);
}

void AreaLamp_shadow_buffer_soft_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->soft = CLAMPIS(value, 0.0f, 100.0f);
}

int AreaLamp_shadow_buffer_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->samp);
}

void AreaLamp_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->samp = CLAMPIS(value, 1, 16);
}

int AreaLamp_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buftype);
}

void AreaLamp_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buftype = value;
}

int AreaLamp_ge_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->shadowmap_type);
}

void AreaLamp_ge_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadowmap_type = value;
}

int AreaLamp_use_auto_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 1) != 0);
}

void AreaLamp_use_auto_clip_start_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 1;
	else data->bufflag &= ~1;
}

int AreaLamp_use_auto_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 2) != 0);
}

void AreaLamp_use_auto_clip_end_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 2;
	else data->bufflag &= ~2;
}

float AreaLamp_compression_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->compressthresh);
}

void AreaLamp_compression_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->compressthresh = CLAMPIS(value, 0.0f, 1.0f);
}

void AreaLamp_shadow_color_get(PointerRNA *ptr, float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->shdwr)[i]);
	}
}

void AreaLamp_shadow_color_set(PointerRNA *ptr, const float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int AreaLamp_use_only_shadow_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void AreaLamp_use_only_shadow_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int AreaLamp_shadow_ray_sample_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp_method);
}

void AreaLamp_shadow_ray_sample_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp_method = value;
}

int AreaLamp_shadow_ray_samples_x_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp);
}

void AreaLamp_shadow_ray_samples_x_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp = CLAMPIS(value, 1, 64);
}

int AreaLamp_shadow_ray_samples_y_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_sampy);
}

void AreaLamp_shadow_ray_samples_y_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_sampy = CLAMPIS(value, 1, 64);
}

float AreaLamp_shadow_adaptive_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->adapt_thresh);
}

void AreaLamp_shadow_adaptive_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->adapt_thresh = CLAMPIS(value, 0.0f, 1.0f);
}

float AreaLamp_shadow_soft_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_size);
}

void AreaLamp_shadow_soft_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int AreaLamp_use_shadow_layer_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32768) != 0);
}

void AreaLamp_use_shadow_layer_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32768;
	else data->mode &= ~32768;
}

int AreaLamp_use_umbra_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->ray_samp_type) & 2) != 0);
}

void AreaLamp_use_umbra_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->ray_samp_type |= 2;
	else data->ray_samp_type &= ~2;
}

int AreaLamp_use_dither_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->ray_samp_type) & 4) != 0);
}

void AreaLamp_use_dither_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->ray_samp_type |= 4;
	else data->ray_samp_type &= ~4;
}

int AreaLamp_use_jitter_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->ray_samp_type) & 8) != 0);
}

void AreaLamp_use_jitter_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->ray_samp_type |= 8;
	else data->ray_samp_type &= ~8;
}

int AreaLamp_shape_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->area_shape);
}

void AreaLamp_shape_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_shape = value;
}

float AreaLamp_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_size);
}

void AreaLamp_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLamp_size_y_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_sizey);
}

void AreaLamp_size_y_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_sizey = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLamp_gamma_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->k);
}

void AreaLamp_gamma_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->k = value;
}

int SpotLamp_falloff_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->falloff_type);
}

void SpotLamp_falloff_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->falloff_type = value;
}

PointerRNA SpotLamp_falloff_curve_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

int SpotLamp_use_sphere_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void SpotLamp_use_sphere_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 64;
	else data->mode &= ~64;
}

float SpotLamp_linear_attenuation_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->att1);
}

void SpotLamp_linear_attenuation_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->att1 = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLamp_quadratic_attenuation_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->att2);
}

void SpotLamp_quadratic_attenuation_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->att2 = CLAMPIS(value, 0.0f, 1.0f);
}

int SpotLamp_use_shadow_get(PointerRNA *ptr)
{
	return rna_use_shadow_get(ptr);
}

void SpotLamp_use_shadow_set(PointerRNA *ptr, int value)
{
	rna_use_shadow_set(ptr, value);
}

int SpotLamp_shadow_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return ((data->mode) & 8193);
}

void SpotLamp_shadow_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->mode &= ~8193;
	data->mode |= value;
}

int SpotLamp_shadow_buffer_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->bufsize);
}

void SpotLamp_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
	rna_Lamp_buffer_size_set(ptr, value);
}

int SpotLamp_shadow_filter_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->filtertype);
}

void SpotLamp_shadow_filter_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->filtertype = value;
}

int SpotLamp_shadow_sample_buffers_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buffers);
}

void SpotLamp_shadow_sample_buffers_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buffers = value;
}

float SpotLamp_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipsta);
}

void SpotLamp_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipsta = CLAMPIS(value, 0.0f, 9999.0f);
}

float SpotLamp_shadow_buffer_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipend);
}

void SpotLamp_shadow_buffer_clip_end_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipend = CLAMPIS(value, 0.0f, 9999.0f);
}

float SpotLamp_shadow_buffer_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bias);
}

void SpotLamp_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bias = CLAMPIS(value, 0.0010000000f, 5.0f);
}

float SpotLamp_shadow_buffer_bleed_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bleedbias);
}

void SpotLamp_shadow_buffer_bleed_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bleedbias = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLamp_shadow_buffer_soft_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->soft);
}

void SpotLamp_shadow_buffer_soft_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->soft = CLAMPIS(value, 0.0f, 100.0f);
}

int SpotLamp_shadow_buffer_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->samp);
}

void SpotLamp_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->samp = CLAMPIS(value, 1, 16);
}

int SpotLamp_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buftype);
}

void SpotLamp_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buftype = value;
}

int SpotLamp_ge_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->shadowmap_type);
}

void SpotLamp_ge_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadowmap_type = value;
}

int SpotLamp_use_auto_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 1) != 0);
}

void SpotLamp_use_auto_clip_start_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 1;
	else data->bufflag &= ~1;
}

int SpotLamp_use_auto_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 2) != 0);
}

void SpotLamp_use_auto_clip_end_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 2;
	else data->bufflag &= ~2;
}

float SpotLamp_compression_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->compressthresh);
}

void SpotLamp_compression_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->compressthresh = CLAMPIS(value, 0.0f, 1.0f);
}

void SpotLamp_shadow_color_get(PointerRNA *ptr, float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->shdwr)[i]);
	}
}

void SpotLamp_shadow_color_set(PointerRNA *ptr, const float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int SpotLamp_use_only_shadow_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void SpotLamp_use_only_shadow_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int SpotLamp_shadow_ray_sample_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp_method);
}

void SpotLamp_shadow_ray_sample_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp_method = value;
}

int SpotLamp_shadow_ray_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp);
}

void SpotLamp_shadow_ray_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp = CLAMPIS(value, 1, 64);
}

float SpotLamp_shadow_adaptive_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->adapt_thresh);
}

void SpotLamp_shadow_adaptive_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->adapt_thresh = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLamp_shadow_soft_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_size);
}

void SpotLamp_shadow_soft_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SpotLamp_use_shadow_layer_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32768) != 0);
}

void SpotLamp_use_shadow_layer_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32768;
	else data->mode &= ~32768;
}

int SpotLamp_use_square_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 128) != 0);
}

void SpotLamp_use_square_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 128;
	else data->mode &= ~128;
}

int SpotLamp_use_halo_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 2) != 0);
}

void SpotLamp_use_halo_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 2;
	else data->mode &= ~2;
}

float SpotLamp_halo_intensity_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->haint);
}

void SpotLamp_halo_intensity_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->haint = value;
}

int SpotLamp_halo_step_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->shadhalostep);
}

void SpotLamp_halo_step_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadhalostep = CLAMPIS(value, 0, 12);
}

float SpotLamp_spot_blend_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->spotblend);
}

void SpotLamp_spot_blend_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->spotblend = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLamp_spot_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->spotsize);
}

void SpotLamp_spot_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->spotsize = CLAMPIS(value, 0.0174532924f, 3.1415927410f);
}

int SpotLamp_show_cone_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 131072) != 0);
}

void SpotLamp_show_cone_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 131072;
	else data->mode &= ~131072;
}

int SunLamp_use_shadow_get(PointerRNA *ptr)
{
	return rna_use_shadow_get(ptr);
}

void SunLamp_use_shadow_set(PointerRNA *ptr, int value)
{
	rna_use_shadow_set(ptr, value);
}

int SunLamp_shadow_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return ((data->mode) & 8192);
}

void SunLamp_shadow_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->mode &= ~8192;
	data->mode |= value;
}

int SunLamp_shadow_buffer_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->bufsize);
}

void SunLamp_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
	rna_Lamp_buffer_size_set(ptr, value);
}

int SunLamp_shadow_filter_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->filtertype);
}

void SunLamp_shadow_filter_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->filtertype = value;
}

int SunLamp_shadow_sample_buffers_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buffers);
}

void SunLamp_shadow_sample_buffers_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buffers = value;
}

float SunLamp_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipsta);
}

void SunLamp_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipsta = CLAMPIS(value, 0.0f, 9999.0f);
}

float SunLamp_shadow_buffer_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->clipend);
}

void SunLamp_shadow_buffer_clip_end_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->clipend = CLAMPIS(value, 0.0f, 9999.0f);
}

float SunLamp_shadow_buffer_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bias);
}

void SunLamp_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bias = CLAMPIS(value, 0.0010000000f, 5.0f);
}

float SunLamp_shadow_buffer_bleed_bias_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->bleedbias);
}

void SunLamp_shadow_buffer_bleed_bias_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->bleedbias = CLAMPIS(value, 0.0f, 1.0f);
}

float SunLamp_shadow_buffer_soft_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->soft);
}

void SunLamp_shadow_buffer_soft_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->soft = CLAMPIS(value, 0.0f, 100.0f);
}

int SunLamp_shadow_buffer_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->samp);
}

void SunLamp_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->samp = CLAMPIS(value, 1, 16);
}

int SunLamp_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->buftype);
}

void SunLamp_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->buftype = value;
}

int SunLamp_ge_shadow_buffer_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->shadowmap_type);
}

void SunLamp_ge_shadow_buffer_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadowmap_type = value;
}

int SunLamp_use_auto_clip_start_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 1) != 0);
}

void SunLamp_use_auto_clip_start_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 1;
	else data->bufflag &= ~1;
}

int SunLamp_use_auto_clip_end_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->bufflag) & 2) != 0);
}

void SunLamp_use_auto_clip_end_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->bufflag |= 2;
	else data->bufflag &= ~2;
}

float SunLamp_compression_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->compressthresh);
}

void SunLamp_compression_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->compressthresh = CLAMPIS(value, 0.0f, 1.0f);
}

void SunLamp_shadow_color_get(PointerRNA *ptr, float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->shdwr)[i]);
	}
}

void SunLamp_shadow_color_set(PointerRNA *ptr, const float values[3])
{
	Lamp *data = (Lamp *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int SunLamp_use_only_shadow_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void SunLamp_use_only_shadow_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int SunLamp_shadow_ray_sample_method_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp_method);
}

void SunLamp_shadow_ray_sample_method_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp_method = value;
}

int SunLamp_shadow_ray_samples_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->ray_samp);
}

void SunLamp_shadow_ray_samples_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->ray_samp = CLAMPIS(value, 1, 64);
}

float SunLamp_shadow_adaptive_threshold_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->adapt_thresh);
}

void SunLamp_shadow_adaptive_threshold_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->adapt_thresh = CLAMPIS(value, 0.0f, 1.0f);
}

float SunLamp_shadow_soft_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->area_size);
}

void SunLamp_shadow_soft_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SunLamp_use_shadow_layer_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->mode) & 32768) != 0);
}

void SunLamp_use_shadow_layer_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->mode |= 32768;
	else data->mode &= ~32768;
}

PointerRNA SunLamp_sky_get(PointerRNA *ptr)
{
	return rna_Lamp_sky_settings_get(ptr);
}

float SunLamp_shadow_frustum_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->shadow_frustum_size);
}

void SunLamp_shadow_frustum_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->shadow_frustum_size = value;
}

static PointerRNA LampSkySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LampSkySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LampSkySettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LampSkySettings_rna_properties_get(iter);
}

void LampSkySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LampSkySettings_rna_properties_get(iter);
}

void LampSkySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LampSkySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LampSkySettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int LampSkySettings_sky_color_space_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->sky_colorspace);
}

void LampSkySettings_sky_color_space_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->sky_colorspace = value;
}

int LampSkySettings_sky_blend_type_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (int)(data->skyblendtype);
}

void LampSkySettings_sky_blend_type_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->skyblendtype = value;
}

float LampSkySettings_horizon_brightness_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->horizon_brightness);
}

void LampSkySettings_horizon_brightness_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->horizon_brightness = CLAMPIS(value, 0.0f, 20.0f);
}

float LampSkySettings_spread_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->spread);
}

void LampSkySettings_spread_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->spread = CLAMPIS(value, 0.0f, 10.0f);
}

float LampSkySettings_sun_brightness_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->sun_brightness);
}

void LampSkySettings_sun_brightness_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->sun_brightness = CLAMPIS(value, 0.0f, 10.0f);
}

float LampSkySettings_sun_size_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->sun_size);
}

void LampSkySettings_sun_size_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->sun_size = CLAMPIS(value, 0.0f, 10.0f);
}

float LampSkySettings_backscattered_light_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->backscattered_light);
}

void LampSkySettings_backscattered_light_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->backscattered_light = CLAMPIS(value, -1.0f, 1.0f);
}

float LampSkySettings_sun_intensity_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->sun_intensity);
}

void LampSkySettings_sun_intensity_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->sun_intensity = CLAMPIS(value, 0.0f, 10.0f);
}

float LampSkySettings_atmosphere_turbidity_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->atm_turbidity);
}

void LampSkySettings_atmosphere_turbidity_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->atm_turbidity = CLAMPIS(value, 1.0f, 30.0f);
}

float LampSkySettings_atmosphere_inscattering_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->atm_inscattering_factor);
}

void LampSkySettings_atmosphere_inscattering_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->atm_inscattering_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float LampSkySettings_atmosphere_extinction_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->atm_extinction_factor);
}

void LampSkySettings_atmosphere_extinction_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->atm_extinction_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float LampSkySettings_atmosphere_distance_factor_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->atm_distance_factor);
}

void LampSkySettings_atmosphere_distance_factor_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->atm_distance_factor = CLAMPIS(value, 0.0f, 500.0f);
}

float LampSkySettings_sky_blend_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->skyblendfac);
}

void LampSkySettings_sky_blend_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->skyblendfac = CLAMPIS(value, 0.0f, 2.0f);
}

float LampSkySettings_sky_exposure_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (float)(data->sky_exposure);
}

void LampSkySettings_sky_exposure_set(PointerRNA *ptr, float value)
{
	Lamp *data = (Lamp *)(ptr->data);
	data->sky_exposure = CLAMPIS(value, 0.0f, 20.0f);
}

int LampSkySettings_use_sky_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->sun_effect_type) & 1) != 0);
}

void LampSkySettings_use_sky_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->sun_effect_type |= 1;
	else data->sun_effect_type &= ~1;
}

int LampSkySettings_use_atmosphere_get(PointerRNA *ptr)
{
	Lamp *data = (Lamp *)(ptr->data);
	return (((data->sun_effect_type) & 2) != 0);
}

void LampSkySettings_use_atmosphere_set(PointerRNA *ptr, int value)
{
	Lamp *data = (Lamp *)(ptr->data);
	if (value) data->sun_effect_type |= 2;
	else data->sun_effect_type &= ~2;
}

int LampTextureSlot_texture_coords_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->texco);
}

void LampTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texco = value;
}

PointerRNA LampTextureSlot_object_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void LampTextureSlot_object_set(PointerRNA *ptr, PointerRNA value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

int LampTextureSlot_use_map_color_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void LampTextureSlot_use_map_color_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int LampTextureSlot_use_map_shadow_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2) != 0);
}

void LampTextureSlot_use_map_shadow_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2;
	else data->mapto &= ~2;
}

float LampTextureSlot_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colfac);
}

void LampTextureSlot_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colfac = value;
}

float LampTextureSlot_shadow_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->shadowfac);
}

void LampTextureSlot_shadow_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->shadowfac = value;
}


struct MTex *LampTextureSlots_add(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void LampTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_add(_selfid, C, reports);
	*((struct MTex **)_retdata) = mtex;
}

struct MTex *LampTextureSlots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void LampTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_create(_selfid, C, reports, index);
	*((struct MTex **)_retdata) = mtex;
}

void LampTextureSlots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void LampTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

/* Repeated prototypes to detect errors */

struct MTex *rna_mtex_texture_slots_add(struct ID *_selfid, bContext *C, ReportList *reports);
struct MTex *rna_mtex_texture_slots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index);
void rna_mtex_texture_slots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index);








/* Lamp */
static EnumPropertyItem rna_Lamp_type_items[6] = {
	{0, "POINT", 0, "Point", "Omnidirectional point light source"},
	{1, "SUN", 0, "Sun", "Constant direction parallel ray light source"},
	{2, "SPOT", 0, "Spot", "Directional cone light source"},
	{3, "HEMI", 0, "Hemi", "180 degree constant light source"},
	{4, "AREA", 0, "Area", "Directional area light source"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Lamp_type = {
	{(PropertyRNA *)&rna_Lamp_distance, NULL,
	-1, "type", 3, "Type",
	"Type of Lamp",
	0, "Lamp",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_type_get, Lamp_type_set, NULL, NULL, NULL, NULL, rna_Lamp_type_items, 5, 0
};

FloatPropertyRNA rna_Lamp_distance = {
	{(PropertyRNA *)&rna_Lamp_energy, (PropertyRNA *)&rna_Lamp_type,
	-1, "distance", 8195, "Distance",
	"Falloff distance - the light is at half the original intensity at this point",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, dist), 4, NULL},
	Lamp_distance_get, Lamp_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 2147483648.0000000000f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Lamp_energy = {
	{(PropertyRNA *)&rna_Lamp_color, (PropertyRNA *)&rna_Lamp_distance,
	-1, "energy", 8195, "Energy",
	"Amount of light that the lamp emits",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, energy), 4, NULL},
	Lamp_energy_get, Lamp_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static float rna_Lamp_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Lamp_color = {
	{(PropertyRNA *)&rna_Lamp_use_own_layer, (PropertyRNA *)&rna_Lamp_energy,
	-1, "color", 8195, "Color",
	"Light color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, r), 4, NULL},
	NULL, NULL, Lamp_color_get, Lamp_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Lamp_color_default
};

BoolPropertyRNA rna_Lamp_use_own_layer = {
	{(PropertyRNA *)&rna_Lamp_use_negative, (PropertyRNA *)&rna_Lamp_color,
	-1, "use_own_layer", 3, "Layer",
	"Illuminate objects only on the same layers the lamp is on",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_use_own_layer_get, Lamp_use_own_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Lamp_use_negative = {
	{(PropertyRNA *)&rna_Lamp_use_specular, (PropertyRNA *)&rna_Lamp_use_own_layer,
	-1, "use_negative", 3, "Negative",
	"Cast negative light",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_use_negative_get, Lamp_use_negative_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Lamp_use_specular = {
	{(PropertyRNA *)&rna_Lamp_use_diffuse, (PropertyRNA *)&rna_Lamp_use_negative,
	-1, "use_specular", 3, "Specular",
	"Create specular highlights",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_use_specular_get, Lamp_use_specular_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Lamp_use_diffuse = {
	{(PropertyRNA *)&rna_Lamp_node_tree, (PropertyRNA *)&rna_Lamp_use_specular,
	-1, "use_diffuse", 3, "Diffuse",
	"Do diffuse shading",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_use_diffuse_get, Lamp_use_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Lamp_node_tree = {
	{(PropertyRNA *)&rna_Lamp_use_nodes, (PropertyRNA *)&rna_Lamp_use_diffuse,
	-1, "node_tree", 8388672, "Node Tree",
	"Node tree for node based lamps",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_Lamp_use_nodes = {
	{(PropertyRNA *)&rna_Lamp_animation_data, (PropertyRNA *)&rna_Lamp_node_tree,
	-1, "use_nodes", 4194305, "Use Nodes",
	"Use shader nodes to render the lamp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Lamp_use_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_use_nodes_get, Lamp_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Lamp_animation_data = {
	{(PropertyRNA *)&rna_Lamp_texture_slots, (PropertyRNA *)&rna_Lamp_use_nodes,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Lamp_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_Lamp_texture_slots = {
	{(PropertyRNA *)&rna_Lamp_active_texture, (PropertyRNA *)&rna_Lamp_animation_data,
	-1, "texture_slots", 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LampTextureSlots},
	Lamp_texture_slots_begin, Lamp_texture_slots_next, Lamp_texture_slots_end, Lamp_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_LampTextureSlot
};

PointerPropertyRNA rna_Lamp_active_texture = {
	{(PropertyRNA *)&rna_Lamp_active_texture_index, (PropertyRNA *)&rna_Lamp_texture_slots,
	-1, "active_texture", 8388609, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 102760448, NULL, NULL,
	0, -1, NULL},
	Lamp_active_texture_get, Lamp_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_Lamp_active_texture_index = {
	{NULL, (PropertyRNA *)&rna_Lamp_active_texture,
	-1, "active_texture_index", 8195, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 102760448, NULL, NULL,
	offsetof(Lamp, texact), 1, NULL},
	Lamp_active_texture_index_get, Lamp_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 17, 0, 17, 1, 0, NULL
};

StructRNA RNA_Lamp = {
	{(ContainerRNA *)&RNA_LampTextureSlots, (ContainerRNA *)&RNA_ShapeKeyBezierPoint,
	NULL,
	{(PropertyRNA *)&rna_Lamp_type, (PropertyRNA *)&rna_Lamp_active_texture_index}},
	"Lamp", NULL, NULL, 7, "Lamp",
	"Lamp datablock for lighting a scene",
	"*", 164,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Texture Slots */
CollectionPropertyRNA rna_LampTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_LampTextureSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlots_rna_properties_begin, LampTextureSlots_rna_properties_next, LampTextureSlots_rna_properties_end, LampTextureSlots_rna_properties_get, NULL, NULL, LampTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LampTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_LampTextureSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_LampTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LampTextureSlot
};

FunctionRNA rna_LampTextureSlots_add_func = {
	{(FunctionRNA *)&rna_LampTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LampTextureSlots_add_mtex, (PropertyRNA *)&rna_LampTextureSlots_add_mtex}},
	"add", 2073, "add",
	LampTextureSlots_add_call,
	(PropertyRNA *)&rna_LampTextureSlots_add_mtex
};

IntPropertyRNA rna_LampTextureSlots_create_index = {
	{(PropertyRNA *)&rna_LampTextureSlots_create_mtex, NULL,
	-1, "index", 7, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_LampTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_LampTextureSlots_create_index,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LampTextureSlot
};

FunctionRNA rna_LampTextureSlots_create_func = {
	{(FunctionRNA *)&rna_LampTextureSlots_clear_func, (FunctionRNA *)&rna_LampTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_LampTextureSlots_create_index, (PropertyRNA *)&rna_LampTextureSlots_create_mtex}},
	"create", 2073, "create",
	LampTextureSlots_create_call,
	(PropertyRNA *)&rna_LampTextureSlots_create_mtex
};

IntPropertyRNA rna_LampTextureSlots_clear_index = {
	{NULL, NULL,
	-1, "index", 7, "Index",
	"Slot index to clear",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_LampTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_LampTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_LampTextureSlots_clear_index, (PropertyRNA *)&rna_LampTextureSlots_clear_index}},
	"clear", 2073, "clear",
	LampTextureSlots_clear_call,
	NULL
};

StructRNA RNA_LampTextureSlots = {
	{(ContainerRNA *)&RNA_PointLamp, (ContainerRNA *)&RNA_Lamp,
	NULL,
	{(PropertyRNA *)&rna_LampTextureSlots_rna_properties, (PropertyRNA *)&rna_LampTextureSlots_rna_type}},
	"LampTextureSlots", NULL, NULL, 4, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LampTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LampTextureSlots_add_func, (FunctionRNA *)&rna_LampTextureSlots_clear_func}
};

/* Point Lamp */
static EnumPropertyItem rna_PointLamp_falloff_type_items[6] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "INVERSE_LINEAR", 0, "Inverse Linear", ""},
	{2, "INVERSE_SQUARE", 0, "Inverse Square", ""},
	{3, "CUSTOM_CURVE", 0, "Custom Curve", ""},
	{4, "LINEAR_QUADRATIC_WEIGHTED", 0, "Lin/Quad Weighted", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_falloff_type = {
	{(PropertyRNA *)&rna_PointLamp_falloff_curve, NULL,
	-1, "falloff_type", 3, "Falloff Type",
	"Intensity Decay with distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_falloff_type_get, PointLamp_falloff_type_set, NULL, NULL, NULL, NULL, rna_PointLamp_falloff_type_items, 5, 0
};

PointerPropertyRNA rna_PointLamp_falloff_curve = {
	{(PropertyRNA *)&rna_PointLamp_use_sphere, (PropertyRNA *)&rna_PointLamp_falloff_type,
	-1, "falloff_curve", 8388608, "Falloff Curve",
	"Custom Lamp Falloff Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_PointLamp_use_sphere = {
	{(PropertyRNA *)&rna_PointLamp_linear_attenuation, (PropertyRNA *)&rna_PointLamp_falloff_curve,
	-1, "use_sphere", 3, "Sphere",
	"Set light intensity to zero beyond lamp distance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_sphere_get, PointLamp_use_sphere_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PointLamp_linear_attenuation = {
	{(PropertyRNA *)&rna_PointLamp_quadratic_attenuation, (PropertyRNA *)&rna_PointLamp_use_sphere,
	-1, "linear_attenuation", 8195, "Linear Attenuation",
	"Linear distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, att1), 4, NULL},
	PointLamp_linear_attenuation_get, PointLamp_linear_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_quadratic_attenuation = {
	{(PropertyRNA *)&rna_PointLamp_use_shadow, (PropertyRNA *)&rna_PointLamp_linear_attenuation,
	-1, "quadratic_attenuation", 8195, "Quadratic Attenuation",
	"Quadratic distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, att2), 4, NULL},
	PointLamp_quadratic_attenuation_get, PointLamp_quadratic_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_PointLamp_use_shadow = {
	{(PropertyRNA *)&rna_PointLamp_shadow_method, (PropertyRNA *)&rna_PointLamp_quadratic_attenuation,
	-1, "use_shadow", 3, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_shadow_get, PointLamp_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_PointLamp_shadow_method_items[3] = {
	{0, "NOSHADOW", 0, "No Shadow", ""},
	{8192, "RAY_SHADOW", 0, "Ray Shadow", "Use ray tracing for shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_shadow_method = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_size, (PropertyRNA *)&rna_PointLamp_use_shadow,
	-1, "shadow_method", 3, "shadow_method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_method_get, PointLamp_shadow_method_set, NULL, NULL, NULL, NULL, rna_PointLamp_shadow_method_items, 2, 0
};

IntPropertyRNA rna_PointLamp_shadow_buffer_size = {
	{(PropertyRNA *)&rna_PointLamp_shadow_filter_type, (PropertyRNA *)&rna_PointLamp_shadow_method,
	-1, "shadow_buffer_size", 3, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_buffer_size_get, PointLamp_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	128, 10240, 128, 10240, 1, 0, NULL
};

static EnumPropertyItem rna_PointLamp_shadow_filter_type_items[4] = {
	{0, "BOX", 0, "Box", "Apply the Box filter to shadow buffer samples"},
	{1, "TENT", 0, "Tent", "Apply the Tent Filter to shadow buffer samples"},
	{2, "GAUSS", 0, "Gauss", "Apply the Gauss filter to shadow buffer samples"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_shadow_filter_type = {
	{(PropertyRNA *)&rna_PointLamp_shadow_sample_buffers, (PropertyRNA *)&rna_PointLamp_shadow_buffer_size,
	-1, "shadow_filter_type", 3, "Shadow Filter Type",
	"Type of shadow filter (Buffer Shadows)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_filter_type_get, PointLamp_shadow_filter_type_set, NULL, NULL, NULL, NULL, rna_PointLamp_shadow_filter_type_items, 3, 0
};

static EnumPropertyItem rna_PointLamp_shadow_sample_buffers_items[4] = {
	{1, "BUFFERS_1", 0, "1", "Only one buffer rendered"},
	{4, "BUFFERS_4", 0, "4", "Render 4 buffers for better AA, this quadruples memory usage"},
	{9, "BUFFERS_9", 0, "9", "Render 9 buffers for better AA, this uses nine times more memory"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_shadow_sample_buffers = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_clip_start, (PropertyRNA *)&rna_PointLamp_shadow_filter_type,
	-1, "shadow_sample_buffers", 3, "Shadow Sample Buffers",
	"Number of shadow buffers to render for better AA, this increases memory usage",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_sample_buffers_get, PointLamp_shadow_sample_buffers_set, NULL, NULL, NULL, NULL, rna_PointLamp_shadow_sample_buffers_items, 3, 1
};

FloatPropertyRNA rna_PointLamp_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_clip_end, (PropertyRNA *)&rna_PointLamp_shadow_sample_buffers,
	-1, "shadow_buffer_clip_start", 8195, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipsta), 4, NULL},
	PointLamp_shadow_buffer_clip_start_get, PointLamp_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_buffer_clip_end = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_bias, (PropertyRNA *)&rna_PointLamp_shadow_buffer_clip_start,
	-1, "shadow_buffer_clip_end", 8195, "Shadow Buffer Clip End",
	"Shadow map clip end, beyond which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipend), 4, NULL},
	PointLamp_shadow_buffer_clip_end_get, PointLamp_shadow_buffer_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_bleed_bias, (PropertyRNA *)&rna_PointLamp_shadow_buffer_clip_end,
	-1, "shadow_buffer_bias", 8195, "Shadow Buffer Bias",
	"Shadow buffer sampling bias",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bias), 4, NULL},
	PointLamp_shadow_buffer_bias_get, PointLamp_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 5.0f, 0.0010000000f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_buffer_bleed_bias = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_soft, (PropertyRNA *)&rna_PointLamp_shadow_buffer_bias,
	-1, "shadow_buffer_bleed_bias", 8195, "Shadow Buffer Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bleedbias), 4, NULL},
	PointLamp_shadow_buffer_bleed_bias_get, PointLamp_shadow_buffer_bleed_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_buffer_soft = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_samples, (PropertyRNA *)&rna_PointLamp_shadow_buffer_bleed_bias,
	-1, "shadow_buffer_soft", 8195, "Shadow Buffer Soft",
	"Size of shadow buffer sampling area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, soft), 4, NULL},
	PointLamp_shadow_buffer_soft_get, PointLamp_shadow_buffer_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_PointLamp_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_PointLamp_shadow_buffer_type, (PropertyRNA *)&rna_PointLamp_shadow_buffer_soft,
	-1, "shadow_buffer_samples", 8195, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, samp), 1, NULL},
	PointLamp_shadow_buffer_samples_get, PointLamp_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

static EnumPropertyItem rna_PointLamp_shadow_buffer_type_items[5] = {
	{0, "REGULAR", 0, "Classical", "Classic shadow buffer"},
	{2, "HALFWAY", 0, "Classic-Halfway", "Regular buffer, averaging the closest and 2nd closest Z value to reducing bias artifacts"},
	{1, "IRREGULAR", 0, "Irregular", "Irregular buffer produces sharp shadow always, but it doesn\'t show up for raytracing"},
	{3, "DEEP", 0, "Deep", "Deep shadow buffer supports transparency and better filtering, at the cost of more memory usage and processing time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_shadow_buffer_type = {
	{(PropertyRNA *)&rna_PointLamp_ge_shadow_buffer_type, (PropertyRNA *)&rna_PointLamp_shadow_buffer_samples,
	-1, "shadow_buffer_type", 3, "Shadow Buffer Type",
	"Type of shadow buffer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_buffer_type_get, PointLamp_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_PointLamp_shadow_buffer_type_items, 4, 0
};

static EnumPropertyItem rna_PointLamp_ge_shadow_buffer_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Simple shadow maps"},
	{1, "VARIANCE", 0, "Variance", "Variance shadow maps"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_ge_shadow_buffer_type = {
	{(PropertyRNA *)&rna_PointLamp_use_auto_clip_start, (PropertyRNA *)&rna_PointLamp_shadow_buffer_type,
	-1, "ge_shadow_buffer_type", 3, "Shadow Map Type",
	"The shadow mapping algorithm used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_ge_shadow_buffer_type_get, PointLamp_ge_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_PointLamp_ge_shadow_buffer_type_items, 2, 0
};

BoolPropertyRNA rna_PointLamp_use_auto_clip_start = {
	{(PropertyRNA *)&rna_PointLamp_use_auto_clip_end, (PropertyRNA *)&rna_PointLamp_ge_shadow_buffer_type,
	-1, "use_auto_clip_start", 3, "Autoclip Start",
	"Automatic calculation of clipping-start, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_auto_clip_start_get, PointLamp_use_auto_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointLamp_use_auto_clip_end = {
	{(PropertyRNA *)&rna_PointLamp_compression_threshold, (PropertyRNA *)&rna_PointLamp_use_auto_clip_start,
	-1, "use_auto_clip_end", 3, "Autoclip End",
	"Automatic calculation of clipping-end, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_auto_clip_end_get, PointLamp_use_auto_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PointLamp_compression_threshold = {
	{(PropertyRNA *)&rna_PointLamp_shadow_color, (PropertyRNA *)&rna_PointLamp_use_auto_clip_end,
	-1, "compression_threshold", 8195, "Compress",
	"Deep shadow map compression threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, compressthresh), 4, NULL},
	PointLamp_compression_threshold_get, PointLamp_compression_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_PointLamp_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PointLamp_shadow_color = {
	{(PropertyRNA *)&rna_PointLamp_use_only_shadow, (PropertyRNA *)&rna_PointLamp_compression_threshold,
	-1, "shadow_color", 8195, "Shadow Color",
	"Color of shadows cast by the lamp",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, shdwr), 4, NULL},
	NULL, NULL, PointLamp_shadow_color_get, PointLamp_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_PointLamp_shadow_color_default
};

BoolPropertyRNA rna_PointLamp_use_only_shadow = {
	{(PropertyRNA *)&rna_PointLamp_shadow_ray_sample_method, (PropertyRNA *)&rna_PointLamp_shadow_color,
	-1, "use_only_shadow", 3, "Only Shadow",
	"Cast shadows only, without illuminating objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_only_shadow_get, PointLamp_use_only_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_PointLamp_shadow_ray_sample_method_items[3] = {
	{1, "ADAPTIVE_QMC", 0, "Adaptive QMC", ""},
	{2, "CONSTANT_QMC", 0, "Constant QMC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLamp_shadow_ray_sample_method = {
	{(PropertyRNA *)&rna_PointLamp_shadow_ray_samples, (PropertyRNA *)&rna_PointLamp_use_only_shadow,
	-1, "shadow_ray_sample_method", 3, "Shadow Ray Sampling Method",
	"Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_shadow_ray_sample_method_get, PointLamp_shadow_ray_sample_method_set, NULL, NULL, NULL, NULL, rna_PointLamp_shadow_ray_sample_method_items, 2, 1
};

IntPropertyRNA rna_PointLamp_shadow_ray_samples = {
	{(PropertyRNA *)&rna_PointLamp_shadow_adaptive_threshold, (PropertyRNA *)&rna_PointLamp_shadow_ray_sample_method,
	-1, "shadow_ray_samples", 8195, "Shadow Ray Samples X",
	"Number of samples taken extra (samples x samples)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, ray_samp), 1, NULL},
	PointLamp_shadow_ray_samples_get, PointLamp_shadow_ray_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_adaptive_threshold = {
	{(PropertyRNA *)&rna_PointLamp_shadow_soft_size, (PropertyRNA *)&rna_PointLamp_shadow_ray_samples,
	-1, "shadow_adaptive_threshold", 8195, "Shadow Adaptive Threshold",
	"Threshold for Adaptive Sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, adapt_thresh), 4, NULL},
	PointLamp_shadow_adaptive_threshold_get, PointLamp_shadow_adaptive_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLamp_shadow_soft_size = {
	{(PropertyRNA *)&rna_PointLamp_use_shadow_layer, (PropertyRNA *)&rna_PointLamp_shadow_adaptive_threshold,
	-1, "shadow_soft_size", 8195, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, area_size), 4, NULL},
	PointLamp_shadow_soft_size_get, PointLamp_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_PointLamp_use_shadow_layer = {
	{NULL, (PropertyRNA *)&rna_PointLamp_shadow_soft_size,
	-1, "use_shadow_layer", 3, "Shadow Layer",
	"Objects on the same layers only cast shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	PointLamp_use_shadow_layer_get, PointLamp_use_shadow_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PointLamp = {
	{(ContainerRNA *)&RNA_AreaLamp, (ContainerRNA *)&RNA_LampTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_PointLamp_falloff_type, (PropertyRNA *)&rna_PointLamp_use_shadow_layer}},
	"PointLamp", NULL, NULL, 7, "Point Lamp",
	"Omnidirectional point lamp",
	"*", 298,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Lamp,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Area Lamp */
BoolPropertyRNA rna_AreaLamp_use_shadow = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_method, NULL,
	-1, "use_shadow", 3, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_shadow_get, AreaLamp_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_AreaLamp_shadow_method_items[3] = {
	{0, "NOSHADOW", 0, "No Shadow", ""},
	{8192, "RAY_SHADOW", 0, "Ray Shadow", "Use ray tracing for shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shadow_method = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_size, (PropertyRNA *)&rna_AreaLamp_use_shadow,
	-1, "shadow_method", 3, "shadow_method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_method_get, AreaLamp_shadow_method_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shadow_method_items, 2, 0
};

IntPropertyRNA rna_AreaLamp_shadow_buffer_size = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_filter_type, (PropertyRNA *)&rna_AreaLamp_shadow_method,
	-1, "shadow_buffer_size", 3, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_buffer_size_get, AreaLamp_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	128, 10240, 128, 10240, 1, 0, NULL
};

static EnumPropertyItem rna_AreaLamp_shadow_filter_type_items[4] = {
	{0, "BOX", 0, "Box", "Apply the Box filter to shadow buffer samples"},
	{1, "TENT", 0, "Tent", "Apply the Tent Filter to shadow buffer samples"},
	{2, "GAUSS", 0, "Gauss", "Apply the Gauss filter to shadow buffer samples"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shadow_filter_type = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_sample_buffers, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_size,
	-1, "shadow_filter_type", 3, "Shadow Filter Type",
	"Type of shadow filter (Buffer Shadows)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_filter_type_get, AreaLamp_shadow_filter_type_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shadow_filter_type_items, 3, 0
};

static EnumPropertyItem rna_AreaLamp_shadow_sample_buffers_items[4] = {
	{1, "BUFFERS_1", 0, "1", "Only one buffer rendered"},
	{4, "BUFFERS_4", 0, "4", "Render 4 buffers for better AA, this quadruples memory usage"},
	{9, "BUFFERS_9", 0, "9", "Render 9 buffers for better AA, this uses nine times more memory"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shadow_sample_buffers = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_clip_start, (PropertyRNA *)&rna_AreaLamp_shadow_filter_type,
	-1, "shadow_sample_buffers", 3, "Shadow Sample Buffers",
	"Number of shadow buffers to render for better AA, this increases memory usage",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_sample_buffers_get, AreaLamp_shadow_sample_buffers_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shadow_sample_buffers_items, 3, 1
};

FloatPropertyRNA rna_AreaLamp_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_clip_end, (PropertyRNA *)&rna_AreaLamp_shadow_sample_buffers,
	-1, "shadow_buffer_clip_start", 8195, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipsta), 4, NULL},
	AreaLamp_shadow_buffer_clip_start_get, AreaLamp_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_buffer_clip_end = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_bias, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_clip_start,
	-1, "shadow_buffer_clip_end", 8195, "Shadow Buffer Clip End",
	"Shadow map clip end, beyond which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipend), 4, NULL},
	AreaLamp_shadow_buffer_clip_end_get, AreaLamp_shadow_buffer_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_bleed_bias, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_clip_end,
	-1, "shadow_buffer_bias", 8195, "Shadow Buffer Bias",
	"Shadow buffer sampling bias",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bias), 4, NULL},
	AreaLamp_shadow_buffer_bias_get, AreaLamp_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 5.0f, 0.0010000000f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_buffer_bleed_bias = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_soft, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_bias,
	-1, "shadow_buffer_bleed_bias", 8195, "Shadow Buffer Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bleedbias), 4, NULL},
	AreaLamp_shadow_buffer_bleed_bias_get, AreaLamp_shadow_buffer_bleed_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_buffer_soft = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_samples, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_bleed_bias,
	-1, "shadow_buffer_soft", 8195, "Shadow Buffer Soft",
	"Size of shadow buffer sampling area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, soft), 4, NULL},
	AreaLamp_shadow_buffer_soft_get, AreaLamp_shadow_buffer_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_AreaLamp_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_buffer_type, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_soft,
	-1, "shadow_buffer_samples", 8195, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, samp), 1, NULL},
	AreaLamp_shadow_buffer_samples_get, AreaLamp_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

static EnumPropertyItem rna_AreaLamp_shadow_buffer_type_items[5] = {
	{0, "REGULAR", 0, "Classical", "Classic shadow buffer"},
	{2, "HALFWAY", 0, "Classic-Halfway", "Regular buffer, averaging the closest and 2nd closest Z value to reducing bias artifacts"},
	{1, "IRREGULAR", 0, "Irregular", "Irregular buffer produces sharp shadow always, but it doesn\'t show up for raytracing"},
	{3, "DEEP", 0, "Deep", "Deep shadow buffer supports transparency and better filtering, at the cost of more memory usage and processing time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shadow_buffer_type = {
	{(PropertyRNA *)&rna_AreaLamp_ge_shadow_buffer_type, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_samples,
	-1, "shadow_buffer_type", 3, "Shadow Buffer Type",
	"Type of shadow buffer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_buffer_type_get, AreaLamp_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shadow_buffer_type_items, 4, 0
};

static EnumPropertyItem rna_AreaLamp_ge_shadow_buffer_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Simple shadow maps"},
	{1, "VARIANCE", 0, "Variance", "Variance shadow maps"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_ge_shadow_buffer_type = {
	{(PropertyRNA *)&rna_AreaLamp_use_auto_clip_start, (PropertyRNA *)&rna_AreaLamp_shadow_buffer_type,
	-1, "ge_shadow_buffer_type", 3, "Shadow Map Type",
	"The shadow mapping algorithm used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_ge_shadow_buffer_type_get, AreaLamp_ge_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_AreaLamp_ge_shadow_buffer_type_items, 2, 0
};

BoolPropertyRNA rna_AreaLamp_use_auto_clip_start = {
	{(PropertyRNA *)&rna_AreaLamp_use_auto_clip_end, (PropertyRNA *)&rna_AreaLamp_ge_shadow_buffer_type,
	-1, "use_auto_clip_start", 3, "Autoclip Start",
	"Automatic calculation of clipping-start, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_auto_clip_start_get, AreaLamp_use_auto_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AreaLamp_use_auto_clip_end = {
	{(PropertyRNA *)&rna_AreaLamp_compression_threshold, (PropertyRNA *)&rna_AreaLamp_use_auto_clip_start,
	-1, "use_auto_clip_end", 3, "Autoclip End",
	"Automatic calculation of clipping-end, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_auto_clip_end_get, AreaLamp_use_auto_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_AreaLamp_compression_threshold = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_color, (PropertyRNA *)&rna_AreaLamp_use_auto_clip_end,
	-1, "compression_threshold", 8195, "Compress",
	"Deep shadow map compression threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, compressthresh), 4, NULL},
	AreaLamp_compression_threshold_get, AreaLamp_compression_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_AreaLamp_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_AreaLamp_shadow_color = {
	{(PropertyRNA *)&rna_AreaLamp_use_only_shadow, (PropertyRNA *)&rna_AreaLamp_compression_threshold,
	-1, "shadow_color", 8195, "Shadow Color",
	"Color of shadows cast by the lamp",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, shdwr), 4, NULL},
	NULL, NULL, AreaLamp_shadow_color_get, AreaLamp_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_AreaLamp_shadow_color_default
};

BoolPropertyRNA rna_AreaLamp_use_only_shadow = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_ray_sample_method, (PropertyRNA *)&rna_AreaLamp_shadow_color,
	-1, "use_only_shadow", 3, "Only Shadow",
	"Cast shadows only, without illuminating objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_only_shadow_get, AreaLamp_use_only_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_AreaLamp_shadow_ray_sample_method_items[4] = {
	{1, "ADAPTIVE_QMC", 0, "Adaptive QMC", ""},
	{2, "CONSTANT_QMC", 0, "Constant QMC", ""},
	{0, "CONSTANT_JITTERED", 0, "Constant Jittered", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shadow_ray_sample_method = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_ray_samples_x, (PropertyRNA *)&rna_AreaLamp_use_only_shadow,
	-1, "shadow_ray_sample_method", 3, "Shadow Ray Sampling Method",
	"Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shadow_ray_sample_method_get, AreaLamp_shadow_ray_sample_method_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shadow_ray_sample_method_items, 3, 0
};

IntPropertyRNA rna_AreaLamp_shadow_ray_samples_x = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_ray_samples_y, (PropertyRNA *)&rna_AreaLamp_shadow_ray_sample_method,
	-1, "shadow_ray_samples_x", 8195, "Shadow Ray Samples",
	"Number of samples taken extra (samples x samples)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, ray_samp), 1, NULL},
	AreaLamp_shadow_ray_samples_x_get, AreaLamp_shadow_ray_samples_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

IntPropertyRNA rna_AreaLamp_shadow_ray_samples_y = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_adaptive_threshold, (PropertyRNA *)&rna_AreaLamp_shadow_ray_samples_x,
	-1, "shadow_ray_samples_y", 8195, "Shadow Ray Samples Y",
	"Number of samples taken extra (samples x samples)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, ray_sampy), 1, NULL},
	AreaLamp_shadow_ray_samples_y_get, AreaLamp_shadow_ray_samples_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_adaptive_threshold = {
	{(PropertyRNA *)&rna_AreaLamp_shadow_soft_size, (PropertyRNA *)&rna_AreaLamp_shadow_ray_samples_y,
	-1, "shadow_adaptive_threshold", 8195, "Shadow Adaptive Threshold",
	"Threshold for Adaptive Sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, adapt_thresh), 4, NULL},
	AreaLamp_shadow_adaptive_threshold_get, AreaLamp_shadow_adaptive_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_shadow_soft_size = {
	{(PropertyRNA *)&rna_AreaLamp_use_shadow_layer, (PropertyRNA *)&rna_AreaLamp_shadow_adaptive_threshold,
	-1, "shadow_soft_size", 8195, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, area_size), 4, NULL},
	AreaLamp_shadow_soft_size_get, AreaLamp_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_AreaLamp_use_shadow_layer = {
	{(PropertyRNA *)&rna_AreaLamp_use_umbra, (PropertyRNA *)&rna_AreaLamp_shadow_soft_size,
	-1, "use_shadow_layer", 3, "Shadow Layer",
	"Objects on the same layers only cast shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_shadow_layer_get, AreaLamp_use_shadow_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AreaLamp_use_umbra = {
	{(PropertyRNA *)&rna_AreaLamp_use_dither, (PropertyRNA *)&rna_AreaLamp_use_shadow_layer,
	-1, "use_umbra", 3, "Umbra",
	"Emphasize parts that are fully shadowed (Constant Jittered sampling)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_umbra_get, AreaLamp_use_umbra_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AreaLamp_use_dither = {
	{(PropertyRNA *)&rna_AreaLamp_use_jitter, (PropertyRNA *)&rna_AreaLamp_use_umbra,
	-1, "use_dither", 3, "Dither",
	"Use 2x2 dithering for sampling  (Constant Jittered sampling)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_dither_get, AreaLamp_use_dither_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AreaLamp_use_jitter = {
	{(PropertyRNA *)&rna_AreaLamp_shape, (PropertyRNA *)&rna_AreaLamp_use_dither,
	-1, "use_jitter", 3, "Jitter",
	"Use noise for sampling  (Constant Jittered sampling)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_use_jitter_get, AreaLamp_use_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_AreaLamp_shape_items[3] = {
	{0, "SQUARE", 0, "Square", ""},
	{1, "RECTANGLE", 0, "Rectangle", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLamp_shape = {
	{(PropertyRNA *)&rna_AreaLamp_size, (PropertyRNA *)&rna_AreaLamp_use_jitter,
	-1, "shape", 3, "Shape",
	"Shape of the area lamp",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	AreaLamp_shape_get, AreaLamp_shape_set, NULL, NULL, NULL, NULL, rna_AreaLamp_shape_items, 2, 0
};

FloatPropertyRNA rna_AreaLamp_size = {
	{(PropertyRNA *)&rna_AreaLamp_size_y, (PropertyRNA *)&rna_AreaLamp_shape,
	-1, "size", 8195, "Size",
	"Size of the area of the area Lamp, X direction size for Rectangle shapes",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, area_size), 4, NULL},
	AreaLamp_size_get, AreaLamp_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_size_y = {
	{(PropertyRNA *)&rna_AreaLamp_gamma, (PropertyRNA *)&rna_AreaLamp_size,
	-1, "size_y", 8195, "Size Y",
	"Size of the area of the area Lamp in the Y direction for Rectangle shapes",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, area_sizey), 4, NULL},
	AreaLamp_size_y_get, AreaLamp_size_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLamp_gamma = {
	{NULL, (PropertyRNA *)&rna_AreaLamp_size_y,
	-1, "gamma", 8195, "Gamma",
	"Light gamma correction value",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, k), 4, NULL},
	AreaLamp_gamma_get, AreaLamp_gamma_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 2.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

StructRNA RNA_AreaLamp = {
	{(ContainerRNA *)&RNA_SpotLamp, (ContainerRNA *)&RNA_PointLamp,
	NULL,
	{(PropertyRNA *)&rna_AreaLamp_use_shadow, (PropertyRNA *)&rna_AreaLamp_gamma}},
	"AreaLamp", NULL, NULL, 7, "Area Lamp",
	"Directional area lamp",
	"*", 302,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Lamp,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Spot Lamp */
static EnumPropertyItem rna_SpotLamp_falloff_type_items[6] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "INVERSE_LINEAR", 0, "Inverse Linear", ""},
	{2, "INVERSE_SQUARE", 0, "Inverse Square", ""},
	{3, "CUSTOM_CURVE", 0, "Custom Curve", ""},
	{4, "LINEAR_QUADRATIC_WEIGHTED", 0, "Lin/Quad Weighted", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_falloff_type = {
	{(PropertyRNA *)&rna_SpotLamp_falloff_curve, NULL,
	-1, "falloff_type", 3, "Falloff Type",
	"Intensity Decay with distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_falloff_type_get, SpotLamp_falloff_type_set, NULL, NULL, NULL, NULL, rna_SpotLamp_falloff_type_items, 5, 0
};

PointerPropertyRNA rna_SpotLamp_falloff_curve = {
	{(PropertyRNA *)&rna_SpotLamp_use_sphere, (PropertyRNA *)&rna_SpotLamp_falloff_type,
	-1, "falloff_curve", 8388608, "Falloff Curve",
	"Custom Lamp Falloff Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_SpotLamp_use_sphere = {
	{(PropertyRNA *)&rna_SpotLamp_linear_attenuation, (PropertyRNA *)&rna_SpotLamp_falloff_curve,
	-1, "use_sphere", 3, "Sphere",
	"Set light intensity to zero beyond lamp distance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_sphere_get, SpotLamp_use_sphere_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpotLamp_linear_attenuation = {
	{(PropertyRNA *)&rna_SpotLamp_quadratic_attenuation, (PropertyRNA *)&rna_SpotLamp_use_sphere,
	-1, "linear_attenuation", 8195, "Linear Attenuation",
	"Linear distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, att1), 4, NULL},
	SpotLamp_linear_attenuation_get, SpotLamp_linear_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_quadratic_attenuation = {
	{(PropertyRNA *)&rna_SpotLamp_use_shadow, (PropertyRNA *)&rna_SpotLamp_linear_attenuation,
	-1, "quadratic_attenuation", 8195, "Quadratic Attenuation",
	"Quadratic distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, att2), 4, NULL},
	SpotLamp_quadratic_attenuation_get, SpotLamp_quadratic_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SpotLamp_use_shadow = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_method, (PropertyRNA *)&rna_SpotLamp_quadratic_attenuation,
	-1, "use_shadow", 3, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_shadow_get, SpotLamp_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpotLamp_shadow_method_items[4] = {
	{0, "NOSHADOW", 0, "No Shadow", ""},
	{1, "BUFFER_SHADOW", 0, "Buffer Shadow", "Let spotlight produce shadows using shadow buffer"},
	{8192, "RAY_SHADOW", 0, "Ray Shadow", "Use ray tracing for shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_shadow_method = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_size, (PropertyRNA *)&rna_SpotLamp_use_shadow,
	-1, "shadow_method", 3, "shadow_method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_method_get, SpotLamp_shadow_method_set, NULL, NULL, NULL, NULL, rna_SpotLamp_shadow_method_items, 3, 0
};

IntPropertyRNA rna_SpotLamp_shadow_buffer_size = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_filter_type, (PropertyRNA *)&rna_SpotLamp_shadow_method,
	-1, "shadow_buffer_size", 3, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_buffer_size_get, SpotLamp_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	128, 10240, 128, 10240, 1, 0, NULL
};

static EnumPropertyItem rna_SpotLamp_shadow_filter_type_items[4] = {
	{0, "BOX", 0, "Box", "Apply the Box filter to shadow buffer samples"},
	{1, "TENT", 0, "Tent", "Apply the Tent Filter to shadow buffer samples"},
	{2, "GAUSS", 0, "Gauss", "Apply the Gauss filter to shadow buffer samples"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_shadow_filter_type = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_sample_buffers, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_size,
	-1, "shadow_filter_type", 3, "Shadow Filter Type",
	"Type of shadow filter (Buffer Shadows)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_filter_type_get, SpotLamp_shadow_filter_type_set, NULL, NULL, NULL, NULL, rna_SpotLamp_shadow_filter_type_items, 3, 0
};

static EnumPropertyItem rna_SpotLamp_shadow_sample_buffers_items[4] = {
	{1, "BUFFERS_1", 0, "1", "Only one buffer rendered"},
	{4, "BUFFERS_4", 0, "4", "Render 4 buffers for better AA, this quadruples memory usage"},
	{9, "BUFFERS_9", 0, "9", "Render 9 buffers for better AA, this uses nine times more memory"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_shadow_sample_buffers = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_clip_start, (PropertyRNA *)&rna_SpotLamp_shadow_filter_type,
	-1, "shadow_sample_buffers", 3, "Shadow Sample Buffers",
	"Number of shadow buffers to render for better AA, this increases memory usage",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_sample_buffers_get, SpotLamp_shadow_sample_buffers_set, NULL, NULL, NULL, NULL, rna_SpotLamp_shadow_sample_buffers_items, 3, 1
};

FloatPropertyRNA rna_SpotLamp_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_clip_end, (PropertyRNA *)&rna_SpotLamp_shadow_sample_buffers,
	-1, "shadow_buffer_clip_start", 8195, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipsta), 4, NULL},
	SpotLamp_shadow_buffer_clip_start_get, SpotLamp_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_buffer_clip_end = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_bias, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_clip_start,
	-1, "shadow_buffer_clip_end", 8195, "Shadow Buffer Clip End",
	"Shadow map clip end, beyond which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipend), 4, NULL},
	SpotLamp_shadow_buffer_clip_end_get, SpotLamp_shadow_buffer_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_bleed_bias, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_clip_end,
	-1, "shadow_buffer_bias", 8195, "Shadow Buffer Bias",
	"Shadow buffer sampling bias",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bias), 4, NULL},
	SpotLamp_shadow_buffer_bias_get, SpotLamp_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 5.0f, 0.0010000000f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_buffer_bleed_bias = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_soft, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_bias,
	-1, "shadow_buffer_bleed_bias", 8195, "Shadow Buffer Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bleedbias), 4, NULL},
	SpotLamp_shadow_buffer_bleed_bias_get, SpotLamp_shadow_buffer_bleed_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_buffer_soft = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_samples, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_bleed_bias,
	-1, "shadow_buffer_soft", 8195, "Shadow Buffer Soft",
	"Size of shadow buffer sampling area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, soft), 4, NULL},
	SpotLamp_shadow_buffer_soft_get, SpotLamp_shadow_buffer_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SpotLamp_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_buffer_type, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_soft,
	-1, "shadow_buffer_samples", 8195, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, samp), 1, NULL},
	SpotLamp_shadow_buffer_samples_get, SpotLamp_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

static EnumPropertyItem rna_SpotLamp_shadow_buffer_type_items[5] = {
	{0, "REGULAR", 0, "Classical", "Classic shadow buffer"},
	{2, "HALFWAY", 0, "Classic-Halfway", "Regular buffer, averaging the closest and 2nd closest Z value to reducing bias artifacts"},
	{1, "IRREGULAR", 0, "Irregular", "Irregular buffer produces sharp shadow always, but it doesn\'t show up for raytracing"},
	{3, "DEEP", 0, "Deep", "Deep shadow buffer supports transparency and better filtering, at the cost of more memory usage and processing time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_shadow_buffer_type = {
	{(PropertyRNA *)&rna_SpotLamp_ge_shadow_buffer_type, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_samples,
	-1, "shadow_buffer_type", 3, "Shadow Buffer Type",
	"Type of shadow buffer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_buffer_type_get, SpotLamp_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_SpotLamp_shadow_buffer_type_items, 4, 0
};

static EnumPropertyItem rna_SpotLamp_ge_shadow_buffer_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Simple shadow maps"},
	{1, "VARIANCE", 0, "Variance", "Variance shadow maps"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_ge_shadow_buffer_type = {
	{(PropertyRNA *)&rna_SpotLamp_use_auto_clip_start, (PropertyRNA *)&rna_SpotLamp_shadow_buffer_type,
	-1, "ge_shadow_buffer_type", 3, "Shadow Map Type",
	"The shadow mapping algorithm used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_ge_shadow_buffer_type_get, SpotLamp_ge_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_SpotLamp_ge_shadow_buffer_type_items, 2, 0
};

BoolPropertyRNA rna_SpotLamp_use_auto_clip_start = {
	{(PropertyRNA *)&rna_SpotLamp_use_auto_clip_end, (PropertyRNA *)&rna_SpotLamp_ge_shadow_buffer_type,
	-1, "use_auto_clip_start", 3, "Autoclip Start",
	"Automatic calculation of clipping-start, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_auto_clip_start_get, SpotLamp_use_auto_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpotLamp_use_auto_clip_end = {
	{(PropertyRNA *)&rna_SpotLamp_compression_threshold, (PropertyRNA *)&rna_SpotLamp_use_auto_clip_start,
	-1, "use_auto_clip_end", 3, "Autoclip End",
	"Automatic calculation of clipping-end, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_auto_clip_end_get, SpotLamp_use_auto_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpotLamp_compression_threshold = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_color, (PropertyRNA *)&rna_SpotLamp_use_auto_clip_end,
	-1, "compression_threshold", 8195, "Compress",
	"Deep shadow map compression threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, compressthresh), 4, NULL},
	SpotLamp_compression_threshold_get, SpotLamp_compression_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_SpotLamp_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpotLamp_shadow_color = {
	{(PropertyRNA *)&rna_SpotLamp_use_only_shadow, (PropertyRNA *)&rna_SpotLamp_compression_threshold,
	-1, "shadow_color", 8195, "Shadow Color",
	"Color of shadows cast by the lamp",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, shdwr), 4, NULL},
	NULL, NULL, SpotLamp_shadow_color_get, SpotLamp_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SpotLamp_shadow_color_default
};

BoolPropertyRNA rna_SpotLamp_use_only_shadow = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_ray_sample_method, (PropertyRNA *)&rna_SpotLamp_shadow_color,
	-1, "use_only_shadow", 3, "Only Shadow",
	"Cast shadows only, without illuminating objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_only_shadow_get, SpotLamp_use_only_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpotLamp_shadow_ray_sample_method_items[3] = {
	{1, "ADAPTIVE_QMC", 0, "Adaptive QMC", ""},
	{2, "CONSTANT_QMC", 0, "Constant QMC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLamp_shadow_ray_sample_method = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_ray_samples, (PropertyRNA *)&rna_SpotLamp_use_only_shadow,
	-1, "shadow_ray_sample_method", 3, "Shadow Ray Sampling Method",
	"Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_shadow_ray_sample_method_get, SpotLamp_shadow_ray_sample_method_set, NULL, NULL, NULL, NULL, rna_SpotLamp_shadow_ray_sample_method_items, 2, 1
};

IntPropertyRNA rna_SpotLamp_shadow_ray_samples = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_adaptive_threshold, (PropertyRNA *)&rna_SpotLamp_shadow_ray_sample_method,
	-1, "shadow_ray_samples", 8195, "Shadow Ray Samples X",
	"Number of samples taken extra (samples x samples)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, ray_samp), 1, NULL},
	SpotLamp_shadow_ray_samples_get, SpotLamp_shadow_ray_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_adaptive_threshold = {
	{(PropertyRNA *)&rna_SpotLamp_shadow_soft_size, (PropertyRNA *)&rna_SpotLamp_shadow_ray_samples,
	-1, "shadow_adaptive_threshold", 8195, "Shadow Adaptive Threshold",
	"Threshold for Adaptive Sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, adapt_thresh), 4, NULL},
	SpotLamp_shadow_adaptive_threshold_get, SpotLamp_shadow_adaptive_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_shadow_soft_size = {
	{(PropertyRNA *)&rna_SpotLamp_use_shadow_layer, (PropertyRNA *)&rna_SpotLamp_shadow_adaptive_threshold,
	-1, "shadow_soft_size", 8195, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, area_size), 4, NULL},
	SpotLamp_shadow_soft_size_get, SpotLamp_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SpotLamp_use_shadow_layer = {
	{(PropertyRNA *)&rna_SpotLamp_use_square, (PropertyRNA *)&rna_SpotLamp_shadow_soft_size,
	-1, "use_shadow_layer", 3, "Shadow Layer",
	"Objects on the same layers only cast shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_shadow_layer_get, SpotLamp_use_shadow_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpotLamp_use_square = {
	{(PropertyRNA *)&rna_SpotLamp_use_halo, (PropertyRNA *)&rna_SpotLamp_use_shadow_layer,
	-1, "use_square", 3, "Square",
	"Cast a square spot light shape",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_square_get, SpotLamp_use_square_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpotLamp_use_halo = {
	{(PropertyRNA *)&rna_SpotLamp_halo_intensity, (PropertyRNA *)&rna_SpotLamp_use_square,
	-1, "use_halo", 3, "Halo",
	"Render spotlight with a volumetric halo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_use_halo_get, SpotLamp_use_halo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpotLamp_halo_intensity = {
	{(PropertyRNA *)&rna_SpotLamp_halo_step, (PropertyRNA *)&rna_SpotLamp_use_halo,
	-1, "halo_intensity", 8195, "Halo Intensity",
	"Brightness of the spotlight\'s halo cone",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, haint), 4, NULL},
	SpotLamp_halo_intensity_get, SpotLamp_halo_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SpotLamp_halo_step = {
	{(PropertyRNA *)&rna_SpotLamp_spot_blend, (PropertyRNA *)&rna_SpotLamp_halo_intensity,
	-1, "halo_step", 8195, "Halo Step",
	"Volumetric halo sampling frequency",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, shadhalostep), 1, NULL},
	SpotLamp_halo_step_get, SpotLamp_halo_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 12, 0, 12, 1, 0, NULL
};

FloatPropertyRNA rna_SpotLamp_spot_blend = {
	{(PropertyRNA *)&rna_SpotLamp_spot_size, (PropertyRNA *)&rna_SpotLamp_halo_step,
	-1, "spot_blend", 8195, "Spot Blend",
	"The softness of the spotlight edge",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, spotblend), 4, NULL},
	SpotLamp_spot_blend_get, SpotLamp_spot_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLamp_spot_size = {
	{(PropertyRNA *)&rna_SpotLamp_show_cone, (PropertyRNA *)&rna_SpotLamp_spot_blend,
	-1, "spot_size", 8195, "Spot Size",
	"Angle of the spotlight beam",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, spotsize), 4, NULL},
	SpotLamp_spot_size_get, SpotLamp_spot_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0174532924f, 3.1415927410f, 0.0174532924f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SpotLamp_show_cone = {
	{NULL, (PropertyRNA *)&rna_SpotLamp_spot_size,
	-1, "show_cone", 3, "Show Cone",
	"Draw transparent cone in 3D view to visualize which objects are contained in it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SpotLamp_show_cone_get, SpotLamp_show_cone_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpotLamp = {
	{(ContainerRNA *)&RNA_SunLamp, (ContainerRNA *)&RNA_AreaLamp,
	NULL,
	{(PropertyRNA *)&rna_SpotLamp_falloff_type, (PropertyRNA *)&rna_SpotLamp_show_cone}},
	"SpotLamp", NULL, NULL, 7, "Spot Lamp",
	"Directional cone lamp",
	"*", 300,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Lamp,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Sun Lamp */
BoolPropertyRNA rna_SunLamp_use_shadow = {
	{(PropertyRNA *)&rna_SunLamp_shadow_method, NULL,
	-1, "use_shadow", 3, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_use_shadow_get, SunLamp_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SunLamp_shadow_method_items[3] = {
	{0, "NOSHADOW", 0, "No Shadow", ""},
	{8192, "RAY_SHADOW", 0, "Ray Shadow", "Use ray tracing for shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_shadow_method = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_size, (PropertyRNA *)&rna_SunLamp_use_shadow,
	-1, "shadow_method", 3, "shadow_method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_method_get, SunLamp_shadow_method_set, NULL, NULL, NULL, NULL, rna_SunLamp_shadow_method_items, 2, 0
};

IntPropertyRNA rna_SunLamp_shadow_buffer_size = {
	{(PropertyRNA *)&rna_SunLamp_shadow_filter_type, (PropertyRNA *)&rna_SunLamp_shadow_method,
	-1, "shadow_buffer_size", 3, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_buffer_size_get, SunLamp_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	128, 10240, 128, 10240, 1, 0, NULL
};

static EnumPropertyItem rna_SunLamp_shadow_filter_type_items[4] = {
	{0, "BOX", 0, "Box", "Apply the Box filter to shadow buffer samples"},
	{1, "TENT", 0, "Tent", "Apply the Tent Filter to shadow buffer samples"},
	{2, "GAUSS", 0, "Gauss", "Apply the Gauss filter to shadow buffer samples"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_shadow_filter_type = {
	{(PropertyRNA *)&rna_SunLamp_shadow_sample_buffers, (PropertyRNA *)&rna_SunLamp_shadow_buffer_size,
	-1, "shadow_filter_type", 3, "Shadow Filter Type",
	"Type of shadow filter (Buffer Shadows)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_filter_type_get, SunLamp_shadow_filter_type_set, NULL, NULL, NULL, NULL, rna_SunLamp_shadow_filter_type_items, 3, 0
};

static EnumPropertyItem rna_SunLamp_shadow_sample_buffers_items[4] = {
	{1, "BUFFERS_1", 0, "1", "Only one buffer rendered"},
	{4, "BUFFERS_4", 0, "4", "Render 4 buffers for better AA, this quadruples memory usage"},
	{9, "BUFFERS_9", 0, "9", "Render 9 buffers for better AA, this uses nine times more memory"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_shadow_sample_buffers = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_clip_start, (PropertyRNA *)&rna_SunLamp_shadow_filter_type,
	-1, "shadow_sample_buffers", 3, "Shadow Sample Buffers",
	"Number of shadow buffers to render for better AA, this increases memory usage",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_sample_buffers_get, SunLamp_shadow_sample_buffers_set, NULL, NULL, NULL, NULL, rna_SunLamp_shadow_sample_buffers_items, 3, 1
};

FloatPropertyRNA rna_SunLamp_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_clip_end, (PropertyRNA *)&rna_SunLamp_shadow_sample_buffers,
	-1, "shadow_buffer_clip_start", 8195, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipsta), 4, NULL},
	SunLamp_shadow_buffer_clip_start_get, SunLamp_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_buffer_clip_end = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_bias, (PropertyRNA *)&rna_SunLamp_shadow_buffer_clip_start,
	-1, "shadow_buffer_clip_end", 8195, "Shadow Buffer Clip End",
	"Shadow map clip end, beyond which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, clipend), 4, NULL},
	SunLamp_shadow_buffer_clip_end_get, SunLamp_shadow_buffer_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_bleed_bias, (PropertyRNA *)&rna_SunLamp_shadow_buffer_clip_end,
	-1, "shadow_buffer_bias", 8195, "Shadow Buffer Bias",
	"Shadow buffer sampling bias",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bias), 4, NULL},
	SunLamp_shadow_buffer_bias_get, SunLamp_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 5.0f, 0.0010000000f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_buffer_bleed_bias = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_soft, (PropertyRNA *)&rna_SunLamp_shadow_buffer_bias,
	-1, "shadow_buffer_bleed_bias", 8195, "Shadow Buffer Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, bleedbias), 4, NULL},
	SunLamp_shadow_buffer_bleed_bias_get, SunLamp_shadow_buffer_bleed_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_buffer_soft = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_samples, (PropertyRNA *)&rna_SunLamp_shadow_buffer_bleed_bias,
	-1, "shadow_buffer_soft", 8195, "Shadow Buffer Soft",
	"Size of shadow buffer sampling area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, soft), 4, NULL},
	SunLamp_shadow_buffer_soft_get, SunLamp_shadow_buffer_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SunLamp_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_SunLamp_shadow_buffer_type, (PropertyRNA *)&rna_SunLamp_shadow_buffer_soft,
	-1, "shadow_buffer_samples", 8195, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, samp), 1, NULL},
	SunLamp_shadow_buffer_samples_get, SunLamp_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

static EnumPropertyItem rna_SunLamp_shadow_buffer_type_items[5] = {
	{0, "REGULAR", 0, "Classical", "Classic shadow buffer"},
	{2, "HALFWAY", 0, "Classic-Halfway", "Regular buffer, averaging the closest and 2nd closest Z value to reducing bias artifacts"},
	{1, "IRREGULAR", 0, "Irregular", "Irregular buffer produces sharp shadow always, but it doesn\'t show up for raytracing"},
	{3, "DEEP", 0, "Deep", "Deep shadow buffer supports transparency and better filtering, at the cost of more memory usage and processing time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_shadow_buffer_type = {
	{(PropertyRNA *)&rna_SunLamp_ge_shadow_buffer_type, (PropertyRNA *)&rna_SunLamp_shadow_buffer_samples,
	-1, "shadow_buffer_type", 3, "Shadow Buffer Type",
	"Type of shadow buffer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_buffer_type_get, SunLamp_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_SunLamp_shadow_buffer_type_items, 4, 0
};

static EnumPropertyItem rna_SunLamp_ge_shadow_buffer_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Simple shadow maps"},
	{1, "VARIANCE", 0, "Variance", "Variance shadow maps"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_ge_shadow_buffer_type = {
	{(PropertyRNA *)&rna_SunLamp_use_auto_clip_start, (PropertyRNA *)&rna_SunLamp_shadow_buffer_type,
	-1, "ge_shadow_buffer_type", 3, "Shadow Map Type",
	"The shadow mapping algorithm used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_ge_shadow_buffer_type_get, SunLamp_ge_shadow_buffer_type_set, NULL, NULL, NULL, NULL, rna_SunLamp_ge_shadow_buffer_type_items, 2, 0
};

BoolPropertyRNA rna_SunLamp_use_auto_clip_start = {
	{(PropertyRNA *)&rna_SunLamp_use_auto_clip_end, (PropertyRNA *)&rna_SunLamp_ge_shadow_buffer_type,
	-1, "use_auto_clip_start", 3, "Autoclip Start",
	"Automatic calculation of clipping-start, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_use_auto_clip_start_get, SunLamp_use_auto_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SunLamp_use_auto_clip_end = {
	{(PropertyRNA *)&rna_SunLamp_compression_threshold, (PropertyRNA *)&rna_SunLamp_use_auto_clip_start,
	-1, "use_auto_clip_end", 3, "Autoclip End",
	"Automatic calculation of clipping-end, based on visible vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_use_auto_clip_end_get, SunLamp_use_auto_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SunLamp_compression_threshold = {
	{(PropertyRNA *)&rna_SunLamp_shadow_color, (PropertyRNA *)&rna_SunLamp_use_auto_clip_end,
	-1, "compression_threshold", 8195, "Compress",
	"Deep shadow map compression threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, compressthresh), 4, NULL},
	SunLamp_compression_threshold_get, SunLamp_compression_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_SunLamp_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SunLamp_shadow_color = {
	{(PropertyRNA *)&rna_SunLamp_use_only_shadow, (PropertyRNA *)&rna_SunLamp_compression_threshold,
	-1, "shadow_color", 8195, "Shadow Color",
	"Color of shadows cast by the lamp",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, shdwr), 4, NULL},
	NULL, NULL, SunLamp_shadow_color_get, SunLamp_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SunLamp_shadow_color_default
};

BoolPropertyRNA rna_SunLamp_use_only_shadow = {
	{(PropertyRNA *)&rna_SunLamp_shadow_ray_sample_method, (PropertyRNA *)&rna_SunLamp_shadow_color,
	-1, "use_only_shadow", 3, "Only Shadow",
	"Cast shadows only, without illuminating objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_use_only_shadow_get, SunLamp_use_only_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SunLamp_shadow_ray_sample_method_items[3] = {
	{1, "ADAPTIVE_QMC", 0, "Adaptive QMC", ""},
	{2, "CONSTANT_QMC", 0, "Constant QMC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SunLamp_shadow_ray_sample_method = {
	{(PropertyRNA *)&rna_SunLamp_shadow_ray_samples, (PropertyRNA *)&rna_SunLamp_use_only_shadow,
	-1, "shadow_ray_sample_method", 3, "Shadow Ray Sampling Method",
	"Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_shadow_ray_sample_method_get, SunLamp_shadow_ray_sample_method_set, NULL, NULL, NULL, NULL, rna_SunLamp_shadow_ray_sample_method_items, 2, 1
};

IntPropertyRNA rna_SunLamp_shadow_ray_samples = {
	{(PropertyRNA *)&rna_SunLamp_shadow_adaptive_threshold, (PropertyRNA *)&rna_SunLamp_shadow_ray_sample_method,
	-1, "shadow_ray_samples", 8195, "Shadow Ray Samples X",
	"Number of samples taken extra (samples x samples)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, ray_samp), 1, NULL},
	SunLamp_shadow_ray_samples_get, SunLamp_shadow_ray_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_adaptive_threshold = {
	{(PropertyRNA *)&rna_SunLamp_shadow_soft_size, (PropertyRNA *)&rna_SunLamp_shadow_ray_samples,
	-1, "shadow_adaptive_threshold", 8195, "Shadow Adaptive Threshold",
	"Threshold for Adaptive Sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, adapt_thresh), 4, NULL},
	SunLamp_shadow_adaptive_threshold_get, SunLamp_shadow_adaptive_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SunLamp_shadow_soft_size = {
	{(PropertyRNA *)&rna_SunLamp_use_shadow_layer, (PropertyRNA *)&rna_SunLamp_shadow_adaptive_threshold,
	-1, "shadow_soft_size", 8195, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(Lamp, area_size), 4, NULL},
	SunLamp_shadow_soft_size_get, SunLamp_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SunLamp_use_shadow_layer = {
	{(PropertyRNA *)&rna_SunLamp_sky, (PropertyRNA *)&rna_SunLamp_shadow_soft_size,
	-1, "use_shadow_layer", 3, "Shadow Layer",
	"Objects on the same layers only cast shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_use_shadow_layer_get, SunLamp_use_shadow_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SunLamp_sky = {
	{(PropertyRNA *)&rna_SunLamp_shadow_frustum_size, (PropertyRNA *)&rna_SunLamp_use_shadow_layer,
	-1, "sky", 8650752, "Sky Settings",
	"Sky related settings for sun lamps",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SunLamp_sky_get, NULL, NULL, NULL,&RNA_LampSkySettings
};

FloatPropertyRNA rna_SunLamp_shadow_frustum_size = {
	{NULL, (PropertyRNA *)&rna_SunLamp_sky,
	-1, "shadow_frustum_size", 8195, "Frustum Size",
	"Size of the frustum used for creating the shadow map",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_draw_update, 0, NULL, NULL,
	offsetof(Lamp, shadow_frustum_size), 4, NULL},
	SunLamp_shadow_frustum_size_get, SunLamp_shadow_frustum_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, -FLT_MAX, FLT_MAX, 2.0f, 1, 0.0f, NULL
};

StructRNA RNA_SunLamp = {
	{(ContainerRNA *)&RNA_LampSkySettings, (ContainerRNA *)&RNA_SpotLamp,
	NULL,
	{(PropertyRNA *)&rna_SunLamp_use_shadow, (PropertyRNA *)&rna_SunLamp_shadow_frustum_size}},
	"SunLamp", NULL, NULL, 7, "Sun Lamp",
	"Constant direction parallel ray lamp",
	"*", 299,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Lamp,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Lamp Sky Settings */
CollectionPropertyRNA rna_LampSkySettings_rna_properties = {
	{(PropertyRNA *)&rna_LampSkySettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_rna_properties_begin, LampSkySettings_rna_properties_next, LampSkySettings_rna_properties_end, LampSkySettings_rna_properties_get, NULL, NULL, LampSkySettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LampSkySettings_rna_type = {
	{(PropertyRNA *)&rna_LampSkySettings_sky_color_space, (PropertyRNA *)&rna_LampSkySettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_LampSkySettings_sky_color_space_items[4] = {
	{0, "SMPTE", 0, "SMPTE", ""},
	{1, "REC709", 0, "REC709", ""},
	{2, "CIE", 0, "CIE", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LampSkySettings_sky_color_space = {
	{(PropertyRNA *)&rna_LampSkySettings_sky_blend_type, (PropertyRNA *)&rna_LampSkySettings_rna_type,
	-1, "sky_color_space", 3, "Sky Color Space",
	"Color space to use for internal XYZ->RGB color conversion",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_sky_color_space_get, LampSkySettings_sky_color_space_set, NULL, NULL, NULL, NULL, rna_LampSkySettings_sky_color_space_items, 3, 0
};

static EnumPropertyItem rna_LampSkySettings_sky_blend_type_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LampSkySettings_sky_blend_type = {
	{(PropertyRNA *)&rna_LampSkySettings_horizon_brightness, (PropertyRNA *)&rna_LampSkySettings_sky_color_space,
	-1, "sky_blend_type", 3, "Sky Blend Mode",
	"Blend mode for combining sun sky with world sky",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_sky_blend_type_get, LampSkySettings_sky_blend_type_set, NULL, NULL, NULL, NULL, rna_LampSkySettings_sky_blend_type_items, 18, 0
};

FloatPropertyRNA rna_LampSkySettings_horizon_brightness = {
	{(PropertyRNA *)&rna_LampSkySettings_spread, (PropertyRNA *)&rna_LampSkySettings_sky_blend_type,
	-1, "horizon_brightness", 8195, "Horizon Brightness",
	"Horizon brightness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, horizon_brightness), 4, NULL},
	LampSkySettings_horizon_brightness_get, LampSkySettings_horizon_brightness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_spread = {
	{(PropertyRNA *)&rna_LampSkySettings_sun_brightness, (PropertyRNA *)&rna_LampSkySettings_horizon_brightness,
	-1, "spread", 8195, "Horizon Spread",
	"Horizon Spread",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, spread), 4, NULL},
	LampSkySettings_spread_get, LampSkySettings_spread_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_sun_brightness = {
	{(PropertyRNA *)&rna_LampSkySettings_sun_size, (PropertyRNA *)&rna_LampSkySettings_spread,
	-1, "sun_brightness", 8195, "Sun Brightness",
	"Sun brightness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, sun_brightness), 4, NULL},
	LampSkySettings_sun_brightness_get, LampSkySettings_sun_brightness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_sun_size = {
	{(PropertyRNA *)&rna_LampSkySettings_backscattered_light, (PropertyRNA *)&rna_LampSkySettings_sun_brightness,
	-1, "sun_size", 8195, "Sun Size",
	"Sun size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, sun_size), 4, NULL},
	LampSkySettings_sun_size_get, LampSkySettings_sun_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_backscattered_light = {
	{(PropertyRNA *)&rna_LampSkySettings_sun_intensity, (PropertyRNA *)&rna_LampSkySettings_sun_size,
	-1, "backscattered_light", 8195, "Backscattered Light",
	"Backscattered light",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, backscattered_light), 4, NULL},
	LampSkySettings_backscattered_light_get, LampSkySettings_backscattered_light_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_sun_intensity = {
	{(PropertyRNA *)&rna_LampSkySettings_atmosphere_turbidity, (PropertyRNA *)&rna_LampSkySettings_backscattered_light,
	-1, "sun_intensity", 8195, "Sun Intensity",
	"Sun intensity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, sun_intensity), 4, NULL},
	LampSkySettings_sun_intensity_get, LampSkySettings_sun_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_atmosphere_turbidity = {
	{(PropertyRNA *)&rna_LampSkySettings_atmosphere_inscattering, (PropertyRNA *)&rna_LampSkySettings_sun_intensity,
	-1, "atmosphere_turbidity", 8195, "Atmosphere Turbidity",
	"Sky turbidity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, atm_turbidity), 4, NULL},
	LampSkySettings_atmosphere_turbidity_get, LampSkySettings_atmosphere_turbidity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 2.0f, 10.0f, 1.0f, 30.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_atmosphere_inscattering = {
	{(PropertyRNA *)&rna_LampSkySettings_atmosphere_extinction, (PropertyRNA *)&rna_LampSkySettings_atmosphere_turbidity,
	-1, "atmosphere_inscattering", 8195, "Atmosphere Inscatter",
	"Scatter contribution factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, atm_inscattering_factor), 4, NULL},
	LampSkySettings_atmosphere_inscattering_get, LampSkySettings_atmosphere_inscattering_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_atmosphere_extinction = {
	{(PropertyRNA *)&rna_LampSkySettings_atmosphere_distance_factor, (PropertyRNA *)&rna_LampSkySettings_atmosphere_inscattering,
	-1, "atmosphere_extinction", 8195, "Atmosphere Extinction",
	"Extinction scattering contribution factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, atm_extinction_factor), 4, NULL},
	LampSkySettings_atmosphere_extinction_get, LampSkySettings_atmosphere_extinction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_atmosphere_distance_factor = {
	{(PropertyRNA *)&rna_LampSkySettings_sky_blend, (PropertyRNA *)&rna_LampSkySettings_atmosphere_extinction,
	-1, "atmosphere_distance_factor", 8195, "Atmosphere Distance Factor",
	"Multiplier to convert blender units to physical distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, atm_distance_factor), 4, NULL},
	LampSkySettings_atmosphere_distance_factor_get, LampSkySettings_atmosphere_distance_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_sky_blend = {
	{(PropertyRNA *)&rna_LampSkySettings_sky_exposure, (PropertyRNA *)&rna_LampSkySettings_atmosphere_distance_factor,
	-1, "sky_blend", 8195, "Sky Blend",
	"Blend factor with sky",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, skyblendfac), 4, NULL},
	LampSkySettings_sky_blend_get, LampSkySettings_sky_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampSkySettings_sky_exposure = {
	{(PropertyRNA *)&rna_LampSkySettings_use_sky, (PropertyRNA *)&rna_LampSkySettings_sky_blend,
	-1, "sky_exposure", 8195, "Sky Exposure",
	"Strength of sky shading exponential exposure correction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	offsetof(Lamp, sky_exposure), 4, NULL},
	LampSkySettings_sky_exposure_get, LampSkySettings_sky_exposure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LampSkySettings_use_sky = {
	{(PropertyRNA *)&rna_LampSkySettings_use_atmosphere, (PropertyRNA *)&rna_LampSkySettings_sky_exposure,
	-1, "use_sky", 3, "Sky",
	"Apply sun effect on sky",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_use_sky_get, LampSkySettings_use_sky_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LampSkySettings_use_atmosphere = {
	{NULL, (PropertyRNA *)&rna_LampSkySettings_use_sky,
	-1, "use_atmosphere", 3, "Atmosphere",
	"Apply sun effect on atmosphere",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_sky_update, 0, NULL, NULL,
	0, -1, NULL},
	LampSkySettings_use_atmosphere_get, LampSkySettings_use_atmosphere_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LampSkySettings = {
	{(ContainerRNA *)&RNA_HemiLamp, (ContainerRNA *)&RNA_SunLamp,
	NULL,
	{(PropertyRNA *)&rna_LampSkySettings_rna_properties, (PropertyRNA *)&rna_LampSkySettings_use_atmosphere}},
	"LampSkySettings", NULL, NULL, 4, "Lamp Sky Settings",
	"Sky related settings for a sun lamp",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LampSkySettings_rna_properties,
	NULL,
	&RNA_SunLamp,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Hemi Lamp */
StructRNA RNA_HemiLamp = {
	{(ContainerRNA *)&RNA_LampTextureSlot, (ContainerRNA *)&RNA_LampSkySettings,
	NULL,
	{NULL, NULL}},
	"HemiLamp", NULL, NULL, 7, "Hemi Lamp",
	"180 degree constant lamp",
	"*", 301,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Lamp,
	NULL,
	rna_Lamp_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Lamp Texture Slot */
static EnumPropertyItem rna_LampTextureSlot_texture_coords_items[4] = {
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"},
	{128, "VIEW", 0, "View", "Use view coordinates for the texture coordinates"},
	{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LampTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_LampTextureSlot_object, NULL,
	-1, "texture_coords", 3, "Texture Coordinates",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlot_texture_coords_get, LampTextureSlot_texture_coords_set, NULL, NULL, NULL, NULL, rna_LampTextureSlot_texture_coords_items, 3, 8
};

PointerPropertyRNA rna_LampTextureSlot_object = {
	{(PropertyRNA *)&rna_LampTextureSlot_use_map_color, (PropertyRNA *)&rna_LampTextureSlot_texture_coords,
	-1, "object", 8388609, "Object",
	"Object to use for mapping with Object texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlot_object_get, LampTextureSlot_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_LampTextureSlot_use_map_color = {
	{(PropertyRNA *)&rna_LampTextureSlot_use_map_shadow, (PropertyRNA *)&rna_LampTextureSlot_object,
	-1, "use_map_color", 3, "Color",
	"Let the texture affect the basic color of the lamp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlot_use_map_color_get, LampTextureSlot_use_map_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LampTextureSlot_use_map_shadow = {
	{(PropertyRNA *)&rna_LampTextureSlot_color_factor, (PropertyRNA *)&rna_LampTextureSlot_use_map_color,
	-1, "use_map_shadow", 3, "Shadow",
	"Let the texture affect the shadow color of the lamp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	0, -1, NULL},
	LampTextureSlot_use_map_shadow_get, LampTextureSlot_use_map_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LampTextureSlot_color_factor = {
	{(PropertyRNA *)&rna_LampTextureSlot_shadow_factor, (PropertyRNA *)&rna_LampTextureSlot_use_map_shadow,
	-1, "color_factor", 8195, "Color Factor",
	"Amount texture affects color values",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(MTex, colfac), 4, NULL},
	LampTextureSlot_color_factor_get, LampTextureSlot_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LampTextureSlot_shadow_factor = {
	{NULL, (PropertyRNA *)&rna_LampTextureSlot_color_factor,
	-1, "shadow_factor", 8195, "Shadow Factor",
	"Amount texture affects shadow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Lamp_update, 0, NULL, NULL,
	offsetof(MTex, shadowfac), 4, NULL},
	LampTextureSlot_shadow_factor_get, LampTextureSlot_shadow_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LampTextureSlot = {
	{(ContainerRNA *)&RNA_Lattice, (ContainerRNA *)&RNA_HemiLamp,
	NULL,
	{(PropertyRNA *)&rna_LampTextureSlot_texture_coords, (PropertyRNA *)&rna_LampTextureSlot_shadow_factor}},
	"LampTextureSlot", NULL, NULL, 4, "Lamp Texture Slot",
	"Texture slot for textures in a Lamp datablock",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

